#include <iostream>
using namespace std;

int sumOfNaturalNumber(int n, int k)
{
start:
	if (n == 1)
		return k;
	k = k + n;
	n = n - 1;
	goto start;
}

int main()
{
	int n;
	int k = 1;

	cin >> n;
	cout << sumOfNaturalNumber(n, k) << endl;
	return 0;
}