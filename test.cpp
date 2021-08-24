#include <iostream>
using namespace std;


int counSet(int n)
{

	int ans = 0;
	while (n > 0)
	{
		ans = ans + (n & 1);
		n = n >> 1;  // n = n>>1
	}
	return ans;
}

// brian kerningham algorithm
// O(set bit count)

// 0 1 1 0 0   ==> n
// 0 1 0 1 1   ==> n-1
// n = 1 0 0 0
// n-1=0 1 1 1
// n = 0 0 0 0

int brianKerningham(int n)
{
	int ans = 0;
	while (n > 0)
	{
		n = (n & (n - 1));
		ans++;
	}
	return ans;
}


bool isKthBitSet(int n, int k)
{
	// using left shift

	if ( (n & (1 << (k - 1)) ) == 0)
		return false;
	else
		return true;


// 0 1 1 0 1 0
// 3
	// 101
	// 2


}

bool iskthBitSetRight(int n, int k)
{
	if ((1 & (n >> (k - 1))) == 1)
		return true;
	else
		return false;
}
// time complexity O(total bits in n)
// O(set bit count)
// O(1)


int a[256];
void initialize()
{
	a[0] = 0;
	for (int i = 1; i < 256; i++)
		a[i] = (i & 1) + a[i / 2];
}
//o(256) ==> o(1)


int countSetBits(int n)
{

	int ans = a[n & 0xFF];
	n = n >> 8;
	ans = ans + a[n & 0xFF];
	n = n >> 8;
	ans = ans + a[n & 0xFF];
	n = n >> 8;
	ans = ans + a[n & 0xFF];
	return ans;
}

// brian kerningham algo
// a[i] = i&1 + a[i/2];
//int a[256];			  0 1 2 3 4 ......255
// a[i]= set bit in i ==> 0 1 1 2 1  a[4] a[128] o(1)
// 00000100 00010100 00001000 11101001
// 00000000000000000000000000 11111111 ==> 0xFF
// 3 + 1+2+1=7

bool isInPower(int n)
{
	if (n == 0)
		return false;
	if (n == 1)
		return true;

	while (n > 1)
	{
		if (n % 2 == 1)
			return false;
		n = n / 2;
	}
	return true;
}

// O(power)
// O(1)

bool power(int n)
{
	if (n == 0)
		return false;
	n = (n & (n - 1));
	if (n == 0)
		return true;
	else
		return false;
}

int main()
{
	// 1 0 1
	// k = 4
	// int n, k;
	// cin >> n >> k;
	// if (iskthBitSetRight(n, k))
	// 	cout << "yes" << endl;
	// else
	// 	cout << "No" << endl;
	int n;
	cin >> n;
	// cout << counSet(n) << endl;
	// cout << brianKerningham(n) << endl;
	// initialize();
	// cout << countSetBits(n) << endl;
	// cout << isInPower(n) << endl;
	cout << power(n) << endl;

	return 0;
}


