#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str, int f, int l)
{
	if (f > l)
		return true;
	return (str[f] == str[l]) && isPalindrome(str, f + 1, l - 1);

}


int main()
{
	string str;
	getline(cin, str);
	if (isPalindrome(str, 0, str.length() - 1))
		cout << "yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}