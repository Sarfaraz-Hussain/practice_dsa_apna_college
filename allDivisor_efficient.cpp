#include <iostream>
using namespace std;


void allDivisor(int n)
{
	for (int i = 1; i * i <= n; i++)
	{
		if (n % i == 0 && n / i != i)
			cout << i << " " << n / i << " ";
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