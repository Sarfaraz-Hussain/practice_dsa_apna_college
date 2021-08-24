#include <iostream>
using namespace std;

// Naive way to solve all prime numbers
bool isPrime(int num)
{
	if (num < 2)
		return false;
	else
	{
		for (int div = 2; div < num; ++div)
		{
			if (num % div == 0)
				return false;

		}
		return true;
	}
}

void printAllPrimeNumbers(int N)
{
	if (N < 2)
		return;
	int num = 2;
	while (num < N)
	{
		if (isPrime(num))
			cout << num << " ";
		num += 1;
	}
	cout << endl;

}

// Driver code

int main() {
	int N;
	cin >> N;
	printAllPrimeNumbers(N);
	return 0;
}


// time complexity is O(n^2)