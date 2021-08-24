#include <bits/stdc++.h>
using namespace std;

int countSubsets(int a[], int n, int sum)
{
	if (n == 0)
		return (sum == 0) ? 1 : 0;
	return countSubsets(a, n - 1, sum) + countSubsets(a, n - 1, sum - a[n - 1]);
}


int main()
{
	int n;
	cin >> n;


	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];

	int sum;
	cin >> sum;

	cout << countSubsets(a, n, sum) << endl;
	return 0;
}