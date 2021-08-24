#include <iostream>
using namespace std;

bool isPower(int n)
{
	if (n == 0)
		return false;
	if ((n & (n - 1)) == 0)
		return true;
	else
		return false;
}

int main()
{
	int n;
	cin >> n;
	if (isPower(n))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	return 0;
}