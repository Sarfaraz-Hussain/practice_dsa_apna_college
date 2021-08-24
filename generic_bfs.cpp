#include <bits/stdc++.h>
using namespace std;

template<typename T>
class Graph {
	unordered_map<T, list<T>> l;
public:
	void addEdge(int u, int v)
	{
		l[u].push_back(v);
		l[v].push_back(u);

	}

	void bfs(T src)
	{
		map<T, bool> visited;
		queue<T> q;
		visited[src] = true;
		q.push(src);
		while (!q.empty())
		{
			T u = q.front();
			q.pop();
			cout << u << " ";
			for (auto nbr : l[u])
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
};

int main()
{
	Graph<int> g;
	g.addEdge(0, 1);
	g.addEdge(0, 3);
	g.addEdge(1, 2);
	g.addEdge(2, 3);
	g.addEdge(3, 4);
	g.addEdge(4, 5);
	g.bfs(0);

}