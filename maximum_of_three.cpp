#include <iostream>
using namespace std;

// solution step are
// 1. Flowchart
// 2. Pseudo code or algorithm
// 3. Wriet hard code

int findMaximumNumber(int &a, int &b, int &c) {

	if (a > b)
		if (a > c)
			return a;
		else
			return c;
	else if (b > c)
		return b;
	else
		return c;
}

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	cout << "The Maximum is " << findMaximumNumber(a, b, c) << endl; // call by references
	return 0;
}