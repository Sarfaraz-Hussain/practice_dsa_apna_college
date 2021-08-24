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

void insertAtEnd(Node* head, int x)
{
	Node* temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	Node* curr = new Node(x);
	temp->next = curr;
	curr = NULL;
	free(curr);

}
void printList(Node* head)
{
	while (head != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}

int main()
{
	Node* head = new Node(10);
	head->next = new Node(20);
	head->next->next = new Node(30);

	// logic to add node at end
	int x;
	cin >> x;
	insertAtEnd(head, x);
	printList(head);
	return 0;

}