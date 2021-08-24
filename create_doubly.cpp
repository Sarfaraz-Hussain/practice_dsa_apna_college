#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	Node *next, *prev;
	Node(int data)
	{
		this->data = data;
		next = prev = NULL;
	}
};

Node* makeDoublyLinkedList(Node* head, int n)
{
	cout << "Enter the node data: ";
	int t = n;
	Node*tail = head;
	while (t--)
	{
		cin >> n;
		Node* temp = new Node(n);
		if (head == NULL) {
			head = tail = temp;
		}
		else
		{
			tail->next = temp;
			temp->prev = tail;
			tail = temp;
		}
		temp = NULL;
		free(temp);
	}
	return head;
}


void printList(Node*head)
{
	if (head == NULL)
		return;
	Node*temp = head;
	while (temp->next != NULL)
	{
		cout << temp->data << " <--> ";
		temp = temp->next;
	}
	cout << temp->data << endl;
}

Node* insertAtBegin(Node* head, int x)
{
	Node *temp = new Node(x);
	if (head == NULL)
	{
		head = temp;
	}
	else
	{
		temp->next = head;
		head->prev = temp;
		head = temp;
	}
	temp = NULL;
	free(temp);
	return head;
}

void insertAtEnd(Node* head, int x)
{
	Node* tail = head;
	while (tail->next != NULL)
		tail = tail->next;
	Node* temp = new Node(x);
	tail->next = temp;
	temp->prev = tail;
	tail = temp;
	temp = NULL;
	free(temp);
}

int main()
{
	int n;
	cout << "Enter the number of nodes: ";
	cin >> n;
	Node* head = NULL;
	head = makeDoublyLinkedList(head, n);
	cout << "The list is below" << endl;
	printList(head);

	// insert at begin logic start in o(1) time
	int x;
	cout << "Enter the to insert at begin: ";
	cin >> x;
	head = insertAtBegin(head, x);
	cout << "After inserting list is below" << endl;
	printList(head);

	// insert at end logic
	// you have to maintain a tail pointer
	cout << "Enter the number to insert at end: ";
	cin >> x;
	insertAtEnd(head, x);
	cout << "After inserting at end" << endl;
	printList(head);
	return 0;
}