#include <iostream>
using namespace std;


void Combination(int n, int k)
{
	if (n == 0)
		return;
	int num = n; // n*()
	for (int i = 1; i < k; i++)
		num = num * (n - i);
	int den = 1;
	for (int i = 1; i <= k; i++)
		den = den * i;

	cout << num / den << endl;
}


// 5c2 = 5*4/1*2 = 10
int main()
{
	int n, k;
	cin >> n >> k;

	Combination(n, k);
	return 0;
}