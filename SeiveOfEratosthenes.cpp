#include <bits/stdc++.h>
using namespace std;


void allPrimes(int n)
{
	bool isPrime[n + 1];
	fill(isPrime, isPrime + n + 1, true);


	for (int i = 4; i <= n; i = i + 2)
		isPrime[i] = false;
	for (int i = 6; i <= n; i = i + 3)
		isPrime[i] = false;
	for (int i = 10; i <= n; i = i + 5)
		isPrime[i] = false;


	for (int i = 2; i <= n; i++)
		if (isPrime[i])
			cout << i << " ";
	cout << endl;
}

int main()
{
	int n;
	cin >> n;
	allPrimes(n);
	return 0;
}