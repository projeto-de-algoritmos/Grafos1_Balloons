'''
In this problem we count how many 
connected components a graph has,
using BFS.
'''

# Adjacency list
city_points = []

# Visited list
visited_points = []

def isVisited(vertex):
    '''
    Check if a vertex is already visited
    '''
    return visited_points[vertex]


def BFS(vertex):
    '''
    An implementation of BFS.
    '''
    queue = []
    queue.append(vertex)

    visited_points[vertex] = True

    while queue:
        vertex = queue.pop(0)
        for i in range(len(city_points[vertex])):
            next = city_points[vertex][i]
            if not isVisited(next):
                queue.append(next)
                visited_points[next] = True


test_cases = int(input())

for case in range(1, test_cases+1):
    line = input().split()

    if len(line) == 2:
        city_points_amount = int(line[0])
        roads_amount = int(line[1])
    else:
        city_points_amount = int(line[0])
        roads_amount = int(input())

    city_points.clear()
    visited_points.clear()

    # If 1, the mayor kept his promise
    connected_components = 1

    # Initialize adjacency list and visited list
    for _ in range(city_points_amount+1):
        vertex_list = []
        city_points.append(vertex_list)
        visited_points.append(False)

    for _ in range(roads_amount):
        line = input().split()
        point_x = int(line[0])
        point_y = int(line[1])
        city_points[point_x].append(point_y)
        city_points[point_y].append(point_x)

    BFS(1)

    for i in range(1, city_points_amount+1):
        if not isVisited(i):
            connected_components += 1
            BFS(i)
            

    if connected_components == 1:
        print(f'Caso #{case}: a promessa foi cumprida')
    else:
        print(f'Caso #{case}: ainda falta(m) {connected_components-1} estrada(s)')
