#include <bits/stdc++.h>
using namespace std;


int main()
{
	// vector<int> v;
	int v[100];
	int i = 0;
	while (cin >> v[i])
	{
		i++;
	}
	for (int j = 0; j < i; j++)
		cout << v[j] << " ";
	cout << endl;
	return 0;
}