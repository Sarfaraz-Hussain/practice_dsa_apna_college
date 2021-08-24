#include <iostream>
using namespace std;

int findMissing(int n, int a[])
{
	int arrayXor = 0;
	for (int i = 0; i < n; i++)
		arrayXor = arrayXor ^ a[i];
	int oneToNXor = 0;
	for (int i = 1; i <= n + 1; i++)
		oneToNXor ^= i;
	return arrayXor ^ oneToNXor;

}

int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << findMissing(n, a) << endl;
	return 0;
}