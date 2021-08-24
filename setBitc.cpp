#include<bits/stdc++.h>
using namespace std;


int table[256];
void initialize()
{
	table[0] = 0;
	for (int i = 1; i < 256; i++)
		table[i] = (i & 1) + table[i / 2];
}

int count(int n)
{
	int ans = table[n & 0xff];
	n = n >> 8;
	ans = ans + table[n & 0xff];
	n = n >> 8;
	ans = ans + table[n & 0xff];
	n = n >> 8;
	ans = ans + table[n & 0xff];
	return ans;

}


int main()
{
	int n;
	cin >> n;
	cout << count(n) << endl;
	return 0;
}