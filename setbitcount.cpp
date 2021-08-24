#include <iostream>
using namespace std;

void setBitCount(int n, int k)
{
	if (1 & (n >> (k - 1)) == 1)
		printf("Yes\n");
	else
		printf("no\n");
}

int main()
{
	int n, k;
	cin >> n >> k;
	setBitCount(n, k);
	return 0;
}