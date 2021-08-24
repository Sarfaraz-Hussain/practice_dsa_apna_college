#include <iostream>
using namespace std;



void allDivisor(int n)
{
	int i;
	for (i = 1; i * i <= n; i++)
	{
		if (n % i == 0)
			cout << i << " ";
	}
	i--;
	for (i = i - 1; i > 0; i--)
	{
		if (n % i == 0 )
			cout << n / i << " ";
	}
	cout << "\n";
}

int main()
{
	int n;
	cin >> n;
	allDivisor(n);
	return 0;
}