#include <iostream>
using namespace std;

// solution steps are
// 1. draw a flowchart
// 2. pseudo code
// 3. hard code

bool isPrime(int &num) {
	// corner case
	if (num < 2)
		return false;
	else {
		int div = 2;
		while (div < num) {
			if (num % div == 0)
				return false;
			div += 1;
		}
		return true;
	}
}
// best case time complexity O(1)
// worst case O(n)

int main() {
	int num;
	cin >> num;
	int ans = isPrime(num);
	if (ans)
		cout << "Yes Prime!" << endl;
	else
		cout << "Not a Prime!" << endl;
	return 0;
}