#include<bits/stdc++.h>
using namespace std;


void twoOddApper(int a[], int n)
{
	pair<int, int> p;
	int Xor = 0, res1 = 0, res2 = 0;
	for (int i = 0; i < n; i++)
		Xor = Xor ^ a[i];
	int sn = Xor & (~(Xor - 1));
	for (int i = 0; i < n; i++)
		if ((sn & a[i]) != 0)
			res1 = res1 ^ a[i];
		else
			res2 = res2 ^ a[i];

	cout << res1 << " " << res2 << endl;
}


int main()
{
	int n;
	cin >> n;
	int a[n];

	for (int i = 0; i < n; i++)
		cin >> a[i];
	twoOddApper(a, n);
	return 0;
}


//0100100100