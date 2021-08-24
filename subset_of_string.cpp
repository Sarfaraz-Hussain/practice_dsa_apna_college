#include <bits/stdc++.h>
using namespace std;


void printSubsetOfString(string str, string curr = "", int index = 0)
{
	if (index == str.length())
	{
		cout << curr << " ";
		return;
	}

	printSubsetOfString(str, curr, index + 1);
	printSubsetOfString(str, curr + str[index], index + 1);

}


int main()
{
	string str;
	getline(cin, str);
	printSubsetOfString(str);
	cout << endl;
	return 0;
}