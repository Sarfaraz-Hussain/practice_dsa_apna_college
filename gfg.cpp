#include <iostream>
using namespace std;


int Add(int a, int b)
{
	while (b != 0)
	{
		int na = a ^ b;
		int nb = (a & b) << 1;
		a = na;
		b = nb;
	}
	return a;
}


int main()
{
	int a, b;
	cin >> a >> b;
	cout << Add(a, b) << endl;

}