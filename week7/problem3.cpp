// C++ program to find shortest path with exactly k edges
#include <bits/stdc++.h>
using namespace std;

// Define number of vertices in the graph and infinite value
#define V 4
#define INF INT_MAX

// A naive recursive function to count walks from u to v with k edges
int shortestPath(int graph[][V], int u, int v, int k)
{
// Base cases
if (k == 0 && u == v)			 return 0;
if (k == 1 && graph[u][v] != INF) return graph[u][v];
if (k <= 0)					 return INF;

// Initialize result
int res = INF;

// Go to all adjacents of u and recur
for (int i = 0; i < V; i++)
{
	if (graph[u][i] != INF && u != i && v != i)
	{
		int rec_res = shortestPath(graph, i, v, k-1);
		if (rec_res != INF)
			res = min(res, graph[u][i] + rec_res);
	}
}
return res;
}

// driver program to test above function
int main()
{
	/* Let us create the graph shown in above diagram*/
	int graph[V][V];
    for(int i =0;i<V;i++)
    {
        for(int j=0;j<V;j++)
        {
            cin>>graph[i][j];
        }
    }
	int u, v, k;
    cin>>u>>v>>k;
	cout << "Weight of the shortest path is " <<
		shortestPath(graph, u, v, k);
	return 0;
}

