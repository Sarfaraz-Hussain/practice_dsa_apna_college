#include <bits/stdc++.h>
using namespace std;


struct Queue {
	int size, cap;
	int *arr;
	Queue(int cap)
	{
		this->cap = cap;
		size = 0;
		arr = new int[cap];
	}

	bool isFull()
	{
		return size == cap;
	}
	bool isEmpty()
	{
		return size == 0;
	}

	void enqueue(int x)
	{
		if (isFull())
			return;
		arr[size] = x;
		size++;
	}

	void dequeue()
	{
		if (isEmpty())
			return;
		for (int i = 0; i < size - 1; i++)
			arr[i] = arr[i + 1];
		size--;
	}

	int getRear() {
		if (isEmpty())
			return -1;
		return size - 1;
	}
	int getFront()
	{
		if (isEmpty())
			return -1;
		return 0;
	}
};


int main()
{
	int cap;
	cin >> cap;
	Queue q(cap);
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	cout << q.getRear() << endl;
	return 0;
}