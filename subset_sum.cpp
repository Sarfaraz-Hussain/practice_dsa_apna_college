#include <bits/stdc++.h>
using namespace std;


int countSubsets(int a[], int sum, int n)
{
	if (n == 0)
	{
		return sum == 0 ? 1 : 0;
	}
	return countSubsets(a, sum, n - 1) + countSubsets(a, sum - a[n - 1], n - 1);
}

int main()
{
	int n, sum;
	cin >> n >> sum;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << countSubsets(a, sum, n) << endl;
	return 0;
}

