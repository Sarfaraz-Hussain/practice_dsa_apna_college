#include <bits/stdc++.h>
using namespace std;

vector<string> permutaion;
void permute(string str, int i = 0)
{
	if (i == str.length() - 1)
	{
		permutaion.push_back(str);
		return;
	}

	for (int j = i; j < str.length(); j++)
	{
		swap(str[i], str[j]);
		permute(str, i + 1);
		swap(str[j], str[i]);
	}
}

int main()
{
	string str;
	getline(cin, str);
	permute(str);
	for (auto str : permutaion)
		cout << str << " ";
	cout << endl;
	return 0;
}