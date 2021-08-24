#include <iostream>
using namespace std;

// Solution steps are
// 1. Draw a flowchart
// 2. Pseudo code
// 3. hard code

bool isPrime(int &N)
{
	if (N < 2)
		return false;
	else
	{
		for (int div = 2; div < N; ++div)
		{
			if (N % div == 0)
				return false;
		}
		return true;
	}
	return -1;

}

int main() {
	int N;
	cin >> N;
	int ans = isPrime(N);    // call by reference
	if (ans)
		cout << "Yes Prime" << endl;
	else
		cout << "Not a Prime" << endl;
	return 0;
}