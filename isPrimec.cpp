#include <iostream>
using namespace std;


int isPrime(int n)
{
	if (n == 1)
		return false;
	for (int i = 2; i < n; i++)
		if (n % i == 0)
			return false;
	return true;
}

int main()
{
	int num;
	cin >> num;
	if (isPrime(num))
		cout << "number is prime" << endl;
	else
		cout << "number is not prime" << endl;
	return 0;
}

// time complexity of the funtion is O(n)
// space is o(1)