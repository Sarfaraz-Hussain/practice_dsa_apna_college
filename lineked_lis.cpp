#include <iostream>
using namespace std;

// node of the linked list
struct Node {
	int data;
	Node *next;
	Node(int data)
	{
		data = data; // this will help to avoid ambiguity
		next = NULL;
	}
};

void print(Node* head)
{
	Node *temp = head;
	while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << "\n";
}
int main()
{
	Node* head = new Node(10);
	head->next = new Node(20);
	head->next->next = new Node(30);


	print(head);
}


