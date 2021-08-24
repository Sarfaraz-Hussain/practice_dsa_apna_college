#include <bits/stdc++.h>
using namespace std;

int historyDocuments(char* input1)
{
	string str2 = "";
	unordered_set<string> uniqueDates;
	for (int i = 0; input1[i] != NULL; i++)
	{
		if (isdigit(input1[i]))
			str2.push_back(input1[i]);
		if (input1[i] == '-')
			str2.clear();
		if (str2.length() == 4)
		{
			uniqueDates.insert(str2);
			str2.clear();
		}
	}
	return uniqueDates.size();
}

int main()
{
	char* str = "UN was on 24-10-1945 and 16-07-1946";
	cout << historyDocuments(str) << endl;
	return 0;
}