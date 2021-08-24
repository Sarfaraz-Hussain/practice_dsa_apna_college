#include <bits/stdc++.h>
using namespace std;


struct Node {
	int data;
	Node* next;
	Node(int data)
	{
		this->data = data;
		next = NULL;
	}
};

struct Queue {
	int size;
	Node *front, *rear;
	Queue()
	{
		size = 0;
		front = rear = NULL;
	}
	bool isEmpty()
	{
		return size == 0;
	}

	void enqueue(Node *temp)
	{
		if (isEmpty())
		{
			front = rear = temp;
		}
		else
		{
			rear->next = temp;
			rear = temp;
		}
		size++;
		temp = NULL;
		free(temp);
	}

	void dequeue()
	{
		if (isEmpty())
			return;
		Node *temp = front;
		front = front->next;
		temp->next = NULL;
		free(temp);
		size--;
	}

	Node* getRear()
	{
		if (isEmpty())
			return NULL;
		return rear;
	}

	Node * getFront()
	{
		if (isEmpty())
			return NULL;
		return front;
	}

};

int main()
{
	Queue q;
	q.enqueue(new Node(10));
	q.enqueue(new Node(20));
	q.enqueue(new Node(30));
	cout << q.size << endl;
	q.dequeue();
	cout << q.getFront()->data << endl;
	cout << q.getRear()->data << endl;


}