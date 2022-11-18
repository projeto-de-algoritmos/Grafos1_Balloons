/* 
 * We are not going to create a adjacence matrix
 * Instead, we are going to use the image itself
 * to represent our graph.
 */

#include <iostream>
#include <vector>
#include <queue>

#define MAX 1030

char image[MAX][MAX];
int dimensionX;
int dimensionY;

bool isPixelInImage(int xAxis, int yAxis) {
    /*
     * Check if the axis of the pixel are inside the image dimensions
     */

    if(xAxis < 0 || xAxis >= dimensionX || yAxis < 0 || yAxis >= dimensionY)
        return false;
    return true;
}

bool isVisited(int xAxis, int yAxis) {
    /*
     * Check if the pixel is already visited
     */
    if(image[xAxis][yAxis] == 'o')
        return true;
    return false;
}

void BFS(int xAxis, int yAxis) {
    /*
     * An implementation of Depth First Search for graphs
     * with a small change to enable the use of the image
     * as a abstration of the graph representation.
     */

    std::vector<int> possibleNeighborsInX {1, -1, 0, 0};
    std::vector<int> possibleNeighborsInY {0, 0, -1, 1};

    std::queue<std::vector<int> > toBeVisited;
    std::vector<int> coord {xAxis, yAxis};

    toBeVisited.push(coord);

    while(!toBeVisited.empty()) {
        std::vector<int> visited_coord = toBeVisited.front();
        toBeVisited.pop();
        for(int i = 0; i < 4; i++) {
            int x = visited_coord[0] + possibleNeighborsInX[i];
            int y = visited_coord[1] + possibleNeighborsInY[i];
        
            if(isPixelInImage(x,y) && !isVisited(x,y)) {
                std::vector<int> new_coord {x, y};
                toBeVisited.push(new_coord);
                image[x][y] = 'o';
            }
        }
    }
}

int main() {

    int clicks = 0;
    
    std::cin >> dimensionX >> dimensionY;

    for(int x = 0; x < dimensionX; x++)
        std::cin >> image[x];

    
    for(int x = 0; x < dimensionX; x++)
        for(int y = 0; y < dimensionY; y++)
            if(!isVisited(x, y)) {
                clicks++;
                BFS(x, y);
            }

    std::cout << clicks << std::endl;

    return 0;
}