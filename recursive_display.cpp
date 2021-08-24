#include <iostream>
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

void recursivedisplay(Node* head)
{
	if (head == NULL)
		return;
	cout << head->data << " ";
	recursivedisplay(head->next);
}

int main()
{
	Node* head = new Node(10);
	head->next = new Node(20);
	head->next->next = new Node(30);
	recursivedisplay(head);
	cout << endl;
}