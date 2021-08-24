#include <bits/stdc++.h>
using namespace std;


void Solution(string str)
{
	string test = "";
	char ch;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			ch = str[i];
		}
		else
		{
			test = test + str[i];
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
			{
				continue;
			}
			else
			{

			}
		}
	}
	cout << endl;
}


int main()
{
	string str;
	getline(cin, str);
	Solution(str);
	return 0;
}