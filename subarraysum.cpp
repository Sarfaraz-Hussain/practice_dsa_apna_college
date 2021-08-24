#include <bits/stdc++.h>
using namespace std;

int countSubarrays(int a[], int n, int x)
{
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			int res = 0;

			for (int k = i; k <= j; k++)
			{
				res = res + a[k];

			}
			if (res == x)
				ans++;

		}
	}
	return ans;
}


int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int x;
	cin >> x;
	cout << countSubarrays(a, n, x) << endl;
}