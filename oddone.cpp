#include <iostream>
using namespace std;


int oddOneOccur(int a[], int n)
{
	int res = a[0];
	for (int i = 1; i < n; i++)
		res = res ^ a[i];
	return res;
}

int main()
{
	int n;
	cin >> n;
	int a[n];
	int i = 0;
	while (i < n)
	{
		cin >> a[i];
		i++;
	}
	cout << oddOneOccur(a, n) << endl;
	return 0;
}