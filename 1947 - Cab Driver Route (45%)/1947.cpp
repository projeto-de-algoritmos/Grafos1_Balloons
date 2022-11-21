// C++ implementation of SPFA

#include <bits/stdc++.h>
using namespace std;

// Graph is stored as vector of vector of pairs
// first element of pair store vertex
// second element of pair store weight
vector<vector<pair<long int, long int> >> graph;
vector<vector<pair<long int, long int> >> path1;
vector<long int> lower;

// Function to add edges in the graph
// connecting a pair of vertex(frm) and weight
// to another vertex(to) in graph
void addEdge(long int frm, long int to, long int weight){
	graph[frm].push_back({ to, weight });
}

void addPath1(long int to, long int forr){
	path1[0].push_back({ to, forr });
}

void addLower(long int to){
	lower.push_back( to );
}

// Function to print shortest distance from source
// void print_distance(int d[], int V)
// {
// 	cout << "Vertex \t\t Distance"
// 		<< " from source" << endl;

// 	for (int i = 1; i <= V; i++) {
// 		cout << i << "			 " << d[i] << '\n';
// 	}
// }

// void print(vector<vector<pair<int, int>>> &myContainer){
//   // Iterating over 2D vector elements
//   for(auto currentVector: myContainer){
//     // Each element of the 2D vector is
//     // a vector itself
//     vector<pair<int, int>> myVector =
//           currentVector;
 
//     // Iterating over the vector
//     // elements
//     cout << "[  ";
//     for(auto pr: myVector){
//       // Print the element
//       cout << "{";
//       cout << pr.first << " , " <<
//               pr.second;
//       cout << "}  ";
//     }
 
//     cout << "]\n";
//   }
// }

long int getIndex(vector<long int> v, long int K)
{
    auto it = find(v.begin(), v.end(), K);
  
    // If element was found
    if (it != v.end()) 
    {
      
        // calculating the index
        // of K
        long int index = it - v.begin();
        // cout << index << endl;
        return index;
    }
    else {
        // If the element is not
        // present in the vector
        // cout << "-1" << endl;
        return -1;
    }
}

// Function to compute the SPF algorithm
long int shortestPathFaster(long int S, long int V, long int end)
{
	// Create array d to store shortest distance
	long int d[V + 1];

	// Boolean array to check if vertex
	// is present in queue or not
	bool inQueue[V + 1] = { false };

	// Initialize the distance from source to
	// other vertex as INT_MAX(infinite)
	for (int i = 0; i <= V; i++) {
		d[i] = INT_MAX;
	}
	d[S] = 0;

	queue<int> q;
	q.push(S);
	inQueue[S] = true;

	while (!q.empty()) {

		// Take the front vertex from Queue
		long int u = q.front();
		q.pop();
		inQueue[u] = false;

		// Relaxing all the adjacent edges of
		// vertex taken from the Queue
		for (int i = 0; i < graph[u].size(); i++) {

			long int v = graph[u][i].first;
			long int weight = graph[u][i].second;

			if (d[v] > d[u] + weight) {
				d[v] = d[u] + weight;

				// Check if vertex v is in Queue or not
				// if not then push it into the Queue
				if (!inQueue[v]) {
					q.push(v);
					inQueue[v] = true;
				}
			}
		}
	}

	// Print the result
// 	cout << end << '\n';
// 	print_distance(d, V);
	return d[end];
}

long int rec(long int current_node, long int V, long int *summ ){
    // *summ+=1;
    long int start = 0;
    long int end = 0;

    for(int i=0; i<path1[0].size(); i++){
        // cout << "dentro " << path1[0].size() << " " << i << '\n';
        if(current_node == path1[0][i].first){
            addLower(0);
            break;
        } else {
            start = shortestPathFaster(current_node, V, path1[0][i].first);
            // cout << "start: " <<start << '\n';
        }
        addLower(start);
    }
    
    long int ind = -1;
    long int min = -1;
    min = *min_element(lower.begin(), lower.end());
    ind = getIndex(lower, min);
    
    
    current_node = path1[0][ind].first;
    // cout << "index: " << ind << " " << current_node << '\n';
    
    // cout << current_node << " - " << path1[0][ind].second;
    *summ += min;
    
    
    if(current_node == path1[0][ind].second){
            end = 0;
    } else {
        end = shortestPathFaster(current_node, V, path1[0][ind].second);
    }   
    
    current_node = path1[0][ind].second;
    // cout << "END: " << end << "sum: " << *summ << '\n';
    
    *summ += end;
    
    // cout << "PATH1 1 :";
    // print(path1);
    
    // cout << "\n cc: " << path1[0][0].first << '\n';
    
    path1[0].erase(path1[0].begin() + ind);
    // path1[0].pop_back();
    
    // cout << "\n" << path1[0][0];
    
    // cout << "PATH1 1 :";
    // print(path1);
    
    // cout << "\nSOMA: " << *summ << "CN: " << current_node<< '\n';
    lower.clear();
    
    
    return current_node;
    
}




// Driver code
int main()
{
	long int V = 5;
	long int S = 1, current_node = 1;
	long int summ = 0;
	
	long int N, M, K;
	long int node1, node2, w;
	long int x, y;
	
	cin >> M >> N >> K;
	
	V = M;
	
    path1 = vector<vector<pair<long int,long int>>> (1);

	graph = vector<vector<pair<long int,long int>>> (M+1);
	
// 	for(int i = 0; i<N; i++){
//     	cout << i;
// 	}
	
	
	for(int i = 0; i<N; i++){
    	cin >> node1 >> node2 >> w;
	    addEdge(node1, node2, w);
	    addEdge(node2, node1, w);
	}
	
	
	for(int i = 0; i<K; i++){
	    cin >> x >> y;
	    addPath1(x,y);
	}
	
	
	long int tamP = 1;
	tamP = path1[0].size();
	for(int i = 0; i < tamP ; i++){
	   // cout << "CN: " << current_node ;
	    current_node = rec(current_node, V, &summ);
	}
	    

	long int a = shortestPathFaster(current_node, V, 1);
	cout << a + summ << '\n';
	
	
	

	return 0;
}
