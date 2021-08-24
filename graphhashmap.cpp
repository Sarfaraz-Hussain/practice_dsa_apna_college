#include <bits/stdc++.h>
using namespace std;

class Graph {
	// hashmap adjacency list
	unordered_map<string, list<pair<string, int>> > l;

public:
	void addEdge(string u, string v, bool bidir, int wt)
	{
		l[u].push_back(make_pair(y, wt));
		if (bidir)
		{
			l[v].push_back(make_pair(x, wt));
		}
	}
	void printList()
	{
		for (auto p : l)
		{
			string city = p.first;
			list<pair<string, int>> nbrs = p.second;
			cout << city << "-->"
			     for (auto nbr : nbrs)
				     cout << nbr.first << " " << nbr.second << ",";
			cout << endl;
		}
	}

};


int main()
{

	Graph g;

	return 0;
}