#include<iostream>

using namespace std;



void oneToN(int n)
{
	if (n == 0)
		return;
	oneToN(n - 1);
	cout << n << " ";
}

int main()
{
	int n;
	cin >> n;
	oneToN(n);
}
