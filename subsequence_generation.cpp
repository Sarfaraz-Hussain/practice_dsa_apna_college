#include<bits/stdc++.h>
using namespace std;

void generateSubsequence(string str)
{
	int n = str.length();
	int powSize = pow(2, n);
	for (int i = 0; i < powSize; i++)
	{
		for (int j = 0; j < n; j++)
			if ((i & (1 << j)) != 0)
				cout << str[j];
		cout << endl;
	}
}


int main()
{
	string str;
	getline(cin, str);
	generateSubsequence(str);
	return 0;
}

// "abc"
/*

0 -- 000  -- ""
1 -- 001  -- "a"
2 -- 010  -- "b"
3 -- 011  -- "ab"
4 -- 100  -- "c"
5 -- 101  -- "ac"
6 -- 110  -- "bc"
7 -- 111  -- "abc"

*/