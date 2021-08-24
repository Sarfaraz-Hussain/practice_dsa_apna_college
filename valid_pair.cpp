#include <bits/stdc++.h>
using namespace std;

bool isValidPair(int n, int sum, int a[])
{
	int l = 0, r = n - 1;
	sort(a, a + r + 1);
	while (l <= r)
	{
		if (a[l] + a[r] == sum)
			return true;
		if (a[l] + a[r] < sum)
			l++;
		else
			r--;
	}
	return false;
}


int main()
{
	int n, sum;
	int a[n];

	cin >> n >> sum;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	if (isValidPair(n, sum, a))
		cout << "1" << endl;
	else
		cout << "0" << endl;
	return 0;
}