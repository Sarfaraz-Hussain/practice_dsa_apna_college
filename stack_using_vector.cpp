#include <bits/stdc++.h>
using namespace std;

struct Mystack {
	vector<int> v;
	void push(int key) {
		v.push_back(key);
	}


	int pop()
	{
		int res = v.back();
		v.pop_back();
		return res;
	}

	int peek()
	{
		return v.back();
	}


	int size()
	{
		return v.size();
	}

	bool isEmpty()
	{
		return v.empty();
	}
};


