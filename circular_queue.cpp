#include <bits/stdc++.h>
using namespace std;


struct Queue {
	int size, front, cap;
	int *arr;
	Queue(int cap)
	{
		this->cap = cap;
		size = 0;
		front = 0;
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


	int getRear()
	{
		if (isEmpty())
			return -1;
		return (front + size - 1) % cap;
	}

	int getFront()
	{
		if (isEmpty())
			return -1;
		return front;
	}

	void enqueue(int x)
	{
		if (isFull())
			return;
		int rear = getRear();
		rear = (rear + 1) % cap;
		arr[rear] = x;
		size++;
	}

	void dequeue()
	{
		if (isEmpty())
			return;
		front = (front + 1) % cap;
		size--;

	}
};

