#include <bits/stdc++.h>
using namespace std;


class Graph {
	int V;
	//Array of list
	list<int> *l;
public:
	Graph(int V)
	{
		this->V = V;
		l = new list<int>[V];  // every element in the list of
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
			{
				cout << x << " ";
			}
			cout << endl;
		}
	}

	void bfs(int src)
	{
		bool visited[V + 1];
		fill(visited, visited + V + 1, false);
		visited[src] = true;
		queue<int> q;
		q.push(src);
		while (!q.empty())
		{
			int curr = q.front();
			q.pop();
			cout << curr << " ";
			for (auto nbr : l[curr])
			{
				if (!visited[nbr]) {
					visited[nbr] = true;
					q.push(nbr);
				}
			}
		}
		cout << endl;

	}
};




int main()
{
	int V, E;
	cin >> V >> E;
	Graph g(V);
	int u, v;

	while (E--)
	{
		cin >> u >> v;
		g.addEdge(u, v);
	}
	int src;
	cin >> src;
	g.bfs(src);

	g.printList();
	return 0;
}