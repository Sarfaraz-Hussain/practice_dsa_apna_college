#include <bits/stdc++.h>
using namespace std;


struct Mystack {
	int *arr;
	int cap;
	int top;
	Mystack(int cap)
	{
		this->cap = cap;
		arr = new int[cap];
		top = -1;
	}

	void push(int item)
	{
		if (top == cap - 1)
		{
			cout << "Stack Overflow" << endl;
			return;
		}
		top++;
		arr[top] = item;
	}

	int pop()
	{
		if (top == -1)
		{
			cout << "Under Flow" << endl;
			return INT_MIN;
		}
		int res = arr[top];
		top--;
		return res;
	}

	int peek()
	{
		if (top == -1)
			return INT_MIN;
		return arr[top];
	}

	int size()
	{
		return top + 1;
	}
	bool isEmpty()
	{
		if (top == -1)
			return true;
		else
			return false;
	}
};


int main()
{
	Mystack s(5);
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	if (s.isEmpty())
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cout << s.size() << endl;
	cout << s.peek() << endl;

}