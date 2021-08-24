#include <iostream>
using namespace std;

class Node {
public:
	int data;
	Node* next;
	Node(int data)
	{
		this->data = data;
		next = NULL;
	}
};

Node* insertAtBegin(Node* head, int x)  // o(1)
{
	Node* temp = new Node(x);
	temp->next = head;
	head = temp;
	temp = NULL;
	free(temp);
	return head;
}

void printList(Node* head)
{
	Node* temp = head;
	while (temp != NULL)   // o(n) where n is the number of node
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main()
{
	Node* head = new Node(10);
	head->next = new Node(20);
	head->next->next = new Node(30);

	// here the insert logic starts
	int x;
	cin >> x;
	head = insertAtBegin(head, x);
	printList(head);
	return 0;
}


// time:- o(n) where n is the number of nodes in linked nlist