#include <bits/stdc++.h>
using namespace std;

bool compare(string a, string b)
{
	return a > b;
}

int main()
{
	string str[] = {"abc", "thy", "89", "jhkjh"};
	int n = sizeof(str) / sizeof(str[0]);
	sort(str, str + n, compare);
	for (auto x : str)
		cout << x << endl;
	return 0;
}