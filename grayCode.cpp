#include <bits/stdc++.h>
using namespace std;

vector<string> grayCode(int n, vector<string> curr)
{
	if (n == 1)
	{
		curr.push_back("0");
		curr.push_back("1");
		return curr;
	}

	curr = grayCode(n - 1, curr);
	vector<string> v;
	for (int i = 0; i < curr.size(); i++)
		v.push_back("0" + curr[i]);
	for (int i = curr.size() - 1; i >= 0; i--)
		v.push_back("1" + curr[i]);
	curr = v;
	return curr;
}

int main()
{
	int n;
	cin >> n;
	vector<string> v;
	v = grayCode(n, v);
	for (auto x : v)
		cout << x << endl;

}