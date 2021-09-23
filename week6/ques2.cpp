// C++ program to find out whether a
// given graph is Bipartite or not
#include <iostream>
#include <queue>
#define V 4

using namespace std;
bool isBipartite(int G[][V], int src)
{
	int colorArr[V];
	for (int i = 0; i < V; ++i)
		colorArr[i] = -1;
	colorArr[src] = 1;
	queue <int> q;
	q.push(src);
	while (!q.empty())
	{
		int u = q.front();
		q.pop();
		if (G[u][u] == 1)
		return false;
		for (int v = 0; v < V; ++v)
		{
			// An edge from u to v exists and
			// destination v is not colored
			if (G[u][v] && colorArr[v] == -1)
			{
				// Assign alternate color to this adjacent v of u
				colorArr[v] = 1 - colorArr[u];
				q.push(v);
			}

			// An edge from u to v exists and destination
			// v is colored with same color as u
			else if (G[u][v] && colorArr[v] == colorArr[u])
				return false;
		}
	}
	return true;
}

int main()
{
	int G[V][V];
    for(int i =0;i<V;i++)
    {
        for(int j=0;j<V;j++)
        {
            cin>>G[i][j];
        }
    }
	isBipartite(G, 0) ? cout << "Bipartite" : cout << "Not Bipartite";
	return 0;
}

