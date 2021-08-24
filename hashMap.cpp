#include <bits/stdc++.h>
using namespace std;

template<class T>
class Graph
{
	unordered_map<T, list<T>> l;
public:
	void addEdge(T u, T v)
	{
		l[u].push_back(v);
		l[v].push_back(u);
	}

	void bfs(T src)
	{
		map<T, bool> visited;
		visited[src] = true;
		queue<T> q;
		q.push(src);
		while (!q.empty())
		{
			T node = q.front();
			q.pop();
			cout << node << " ";
			for (auto nbr : l[node])
			{
				if (!visited[nbr])
				{
					visited[nbr] = true;
					q.push(nbr);
				}
			}
		}
		cout << endl;
	}

	void sssp(T src);
};

template<class T>
void Graph<T>::sssp(T src)
{
	map<T, int> dist;
	for (auto node_pair : l)
	{
		T node = node_pair.first;
		dist[node] = INT_MAX;
	}
	dist[src] = 0;
	queue<T> q;
	q.push(src);

	while (!q.empty())
	{
		T node = q.front();
		q.pop();
		for (auto nbr : l[node])
		{
			if (dist[nbr] == INT_MAX)

			{
				q.push(nbr);
				dist[nbr] = dist[node] + 1;
			}
		}
	}
	for (auto d : dist)
	{
		cout << d.first << " --> " << d.second << endl;
	}
}

int main()
{
	Graph<string> g;
	g.addEdge("A", "B");
	g.addEdge("A", "D");
	g.addEdge("B", "C");
	g.addEdge("C", "D");
	g.addEdge("D", "E");
	g.sssp("A");
	return 0;
}