#include <iostream>
using namespace std;

void swap(int &x, int &y)
{
	int t = x;
	x = y;
	y = t;
}

int main()
{
	int a = 10;
	int b = 30;
	swap(a, b);
	cout << a << " " << b << endl;
	return 0;
}