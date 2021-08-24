#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	cin >> n;
	vector<vector<int>> adj(n + 1);
	int t = n;
	int u, v;
	while (t--)
	{
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	for (auto x : adj)
	{
		for (auto y : x)
			cout << y << " ";
		cout << endl;
	}
	return 0;
}

// adjacency list and matrix representaion are the two ways to represent in memory right
