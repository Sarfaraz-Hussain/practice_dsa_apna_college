#include <bits/stdc++.h>
using namespace std;


bool isContainAllMatching(string str)
{
	int count = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '(')
			count++;
		if (str[i] == ')')
			count--;
	}
	return count == 0;
}

int main()
{
	string str;
	getline(cin, str);
	if (isContainAllMatching(str))
		cout << "0" << endl;
	else
		cout << "1" << endl;
	return 0;
}