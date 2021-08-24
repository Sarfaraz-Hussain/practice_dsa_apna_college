#include <bits/stdc++.h>
using namespace std;

void subsetOfArray(int a[], vector<int> curr, int n)
{
	if (n == 0)
	{
		cout << "[ ";
		for (auto x : curr)
			cout << x << " ";
		cout << ']' << endl;
		return;
	}

	subsetOfArray(a, curr, n - 1);
	curr.push_back(a[n - 1]);
	subsetOfArray(a, curr, n - 1);
}



int main()
{
	vector<int> curr;
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	subsetOfArray(a, curr, n);
}