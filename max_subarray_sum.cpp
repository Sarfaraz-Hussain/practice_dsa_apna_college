#include <iostream>
using namespace std;

int maxSubarraySum(int a[], int n)
{
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		int curr = 0;
		for (int j = i; j < n; j++)
		{
			curr = curr + a[j];
			ans = max(ans, curr);
		}
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
	cout << maxSubarraySum(a, n) << endl;
	return 0;
}

// time complexity of the solution is O(n^2)
// aux space O(1)