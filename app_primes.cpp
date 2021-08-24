#include <iostream>
using namespace std;

bool isPrime(int n)
{
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}

void allPrimes(int n)
{
	if (n <= 1)
		return;
	for (int i = 2; i <= n; i++)      // time complexity O(n*sqrt(n))
	{
		if (isPrime(i))
			cout << i << " ";
	}
	cout << endl;
}

int main()
{
	int n;
	cin >> n;
	allPrimes(n);
	return 0;
}