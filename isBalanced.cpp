#include <bits/stdc++.h>
using namespace std;


bool matching(char a, char b)
{
	return ((a == '(' && b == ')') ||
	        (a == '{' && b == '}') ||

	        (a == '[' && b == ']'));
}

bool isBalanced(string str)
{

	stack<char> s;
	for (auto x : str)
	{
		if (x == '[' || x == '(' || x == '{')
			s.push(x);
		else
		{
			if (s.empty())
				return false;
			if (!matching(s.top(), x))
				return false;
			else
				s.pop();
		}
	}
	return s.empty() == true;
}


int main()
{
	string str;
	getline(cin, str);
	if (isBalanced(str))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}