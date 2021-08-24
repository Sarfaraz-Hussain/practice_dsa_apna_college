#include <iostream>
using namespace std;

bool isPalindrome(int f, int l, string str)
{
	if (f >= l)
		return true;

	return (str[f] == str[l]) && isPalindrome(++f, --l, str);
}

int main()
{
	string str;
	getline(cin, str);
	int f = 0, l = str.length() - 1;

	if (isPalindrome(f, l, str))
		cout << "String is Palindrome" << endl;
	else
		cout << "String is not palindrome" << endl;
	return 0;
}