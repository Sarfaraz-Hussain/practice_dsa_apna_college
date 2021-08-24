#include <bits/stdc++.h>
using namespace std;


void generateSubset(string str, string curr = "", int i = 0)
{
	if (i == str.length())
	{
		cout << curr << " ";
		return;
	}

	generateSubset(str, curr, i + 1);
	generateSubset(str, curr + str[i], i + 1);
}


int main()
{
	string str;
	getline(cin, str);
	generateSubset(str);
	cout << endl;
	return 0;
}