#include <bits/stdc++.h>
using namespace std;
void insert(vector<int> &arr, int loc, int x)
{
	int i;
	int n = arr.size();
	for (i = n; i > loc - 1; i--)
		arr[i] = arr[i - 1];
	arr[i] = x;

}

int main()
{
	int n;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		int val;
		cin >> val;
		v.push_back(val);
	}

	int loc, x;
	cin >> loc >> x;
	insert(v, loc, x);
	for (auto x : v)
		cout << x << " ";
	cout << endl;
}