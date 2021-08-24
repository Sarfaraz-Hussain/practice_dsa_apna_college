#include <bits/stdc++.h>
using namespace std;

class Graph {
	int V;
	// Array of list to store the graph
	list<int> *l;
public:
	Graph(int V)
	{
		this->V = V;
		l = new list<int>[V];
	}

	void addEdge(int u, int v)
	{
		l[u].push_back(v);
		l[v].push_back(u);
	}

	void printList()
	{
		for (int i = 0; i < V; i++)
		{
			for (auto x : l[i])
				cout << x << " ";
			cout << endl;
		}
	}
};



int main()
{
	int V, E;
	cin >> V >> E;
	Graph graph(V);
	int u, v;
	while (E--)
	{
		cin >> u >> v;
		graph.addEdge(u, v);
	}

	graph.printList();
	return 0;
}