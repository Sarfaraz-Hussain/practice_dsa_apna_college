#include <bits/stdc++.h>
using namespace std;


bool isPalindrome(string str) {
	int low = 0, high = str.length() - 1n;

	while (low < high) {
		if (str[low] != str[high])
			return false;
		low++;
		high--;
	}
	return true;
}

int main() {
	int num;
	cin >> num;
	string str = to_string(num);

	if (isPalindrome(str))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}