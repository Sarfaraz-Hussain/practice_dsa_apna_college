#include <bits/stdc++.h>
using namespace std;


bool isStringContainUniqueChar(string str)
{
	int checker = 0;

	for (int i = 0; i < str.length(); ++i)
	{
		int val = (str[i] - 'a');

		// If bit corresponding to current
		// character is already set
		if ((checker & (1 << val)) > 0)
			return false;

		// set bit in checker
		checker |=  (1 << val);
	}

	return true;
}

int lengthOfLongestSubstring(string str)
{
	int ans = 0;
	for (int i = 0; i < str.length(); i++)
	{
		for (int j = i; j < str.length(); j++)
		{
			string s = str.substr(i, j + 1);

			if (isStringContainUniqueChar(s)) {
				int curr_length = s.length();
				ans  = max(ans, curr_length);
			}

		}
	}
	return ans;
}


int main()
{
	string str;
	getline(cin, str);
	cout << "Length of Longest Substring: " << lengthOfLongestSubstring(str) << endl;
	return 0;
}