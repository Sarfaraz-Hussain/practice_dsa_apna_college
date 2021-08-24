#include <iostream>
using namespace std;


int numberOfTrailingZeros(int n)
{
	int res = 0;
	for (int i = 5; i <= n; i = i * 5)
	{
		res = res + n / i;
	}
	return res;
}


int main()
{
	int num;
	cin >> num;
	cout << numberOfTrailingZeros(num) << endl;
	return 0;
}