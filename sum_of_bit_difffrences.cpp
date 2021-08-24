#include <bits/stdc++.h>
using namespace std;


int bitDiffrenceCount(pair<int, int> p)
{
	int count = 0;
	while (p.first != 0 or p.second != 0)
	{
		if (p.first % 2 != p.second % 2)
			count++;
		p.first = (p.first >> 1);
		p.second = (p.second >> 1);
	}
	return count;
}

int sumOfBitDifferences(int a[], int n)
{
	int ans  = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			pair<int, int> p;
			p.first = a[i];
			p.second = a[j];
			ans = ans + bitDiffrenceCount(p);
		}
	}
	return 2 * ans;
}

int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << sumOfBitDifferences(a, n) << endl;
	return 0;
}