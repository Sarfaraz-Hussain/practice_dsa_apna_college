#include <iostream>
using namespace std;

int maxSum(int a[], int n)
{
	int maxEnding = a[0];
	int ans = maxEnding;
	for (int i = 1; i < n; i++)
	{
		maxEnding = max(maxEnding + a[i], a[i]);
		ans = max(maxEnding, ans);
	}
	return ans;
}

int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << maxSum(a, n) << endl;
	return 0;
}


// time complexity of the solution is O(n)
// aux space is O(1)