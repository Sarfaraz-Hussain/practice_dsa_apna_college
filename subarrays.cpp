#include <bits/stdc++.h>
using namespace std;

int generateSubarray(int a[], int n)
{
	int ans = 0;
	for (int i = 0; i < n; i++)
		for (int j = i; j < n; j++) {
			int res = 0;
			for (int k = i; k <= j; k++)
				res = (res ^ a[k]);
			ans = (ans ^ res);
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
	cout << generateSubarray(a, n) << endl;
	return 0;
}