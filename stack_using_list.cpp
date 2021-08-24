#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		next = NULL;
	}
};


struct Mystack
{
	Node *head;
	int sz;
	Mystack()
	{
		head = NULL;
		sz = 0;
	}


	void push(int k)
	{
		Node *temp = new Node(k);
		temp->next = head;
		head = temp;
		sz++;
	}

	int pop()
	{
		if (head == NULL)
			return INT_MIN;
		Node *temp = head;
		head = head->next;
		int rs = temp->data;
		temp = NULL;
		free(temp);
		sz--;
		return rs;

	}

	int size()
	{
		return sz;
	}

	bool isEmpty()
	{
		return head == NULL;
	}

	int peek()
	{
		if (head == NULL)
			return INT_MAX;
		return head->data;
	}

};


int main()
{
	Mystack s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	while (!s.isEmpty())
	{
		cout << s.pop() << endl;
	}
}