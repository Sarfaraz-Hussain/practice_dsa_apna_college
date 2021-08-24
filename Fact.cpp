#include <iostream>
using namespace std;

int calculateFactorial(int num)
{
	int res = 1;
	for (int i = 2; i <= num; ++i)
		res = res * i;
	return res;
}


int main()
{
	int num;
	cin >> num;
	cout << calculateFactorial(num) << endl;
	return 0;
}