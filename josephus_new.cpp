#include <bits/stdc++.h>
using namespace std;

// In this josephus problem every (k-1)th person kill the kth person and a pistol is handed over to (k+1)th person. This
// process remains continues utill there one person remain.

int jos(int n, int k)
{
	if (n == 1)
		return 0;
	return (jos(n - 1, k) + k) % n;
}

int main()
{
	int n, k;
	cin >> n >> k;
	cout << jos(n, k) + 1 << endl;
	return 0;
}