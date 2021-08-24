#include <bits/stdc++.h>
using namespace std;

void TOH(int n, char A = 'A', char B = 'B', char C = 'C')
{
	if (n == 1)
	{
		cout << "Move disc " << n << " from " << A << " to " << C << endl;
		return;
	}
	TOH(n - 1, A, C, B);
	cout << "Move disc " << n << " from " << A << " to " << C << endl;
	TOH(n - 1, B, A, C);
}



int main()
{
	int n;
	cin >> n;

	TOH(n);
	return 0;
}