#include <bits/stdc++.h>
using namespace std;


int doReverseOfNumber(int n)
{
	int rev = 0;

	while (n > 0)
	{
		rev = rev * 10 + n % 10;
		n = n / 10;

	}
	return rev;
}


bool isPalindrome(int num)
{
	int revOfNumber = doReverseOfNumber(num);
	if (revOfNumber == num)
		return true;
	else
		return false;
}

int main()
{
	int num;
	cin >> num;
	if (isPalindrome(num))
		cout << "number is palindrome" << endl;
	else
		cout << "Number is not palindrome" << endl;
	return 0;
}