#include <iostream>
using namespace std;

int GCD(int a, int b)
{

	for (int i = min(a, b); i >= 1; i--)
	{
		if (a % i == 0 && b % i == 0) {
			return i;
		}
	}
	return 1;
}


int main()
{
	int a, b;
	cin >> a >> b;
	cout << GCD(a, b) << endl;
	return 0;
}