#include <iostream>
using namespace std;

struct Node {
	int data;
	Node *prev, *next;
	Node(int data)
	{
		this->data = data;
		prev = next = NULL;
	}
};

void printList(Node* head)
{
	Node*temp = head;
	while (temp->next != NULL)
	{
		cout << temp->data << " <--> ";
		temp = temp->next;
	}
	cout << temp->data << endl;
	temp = NULL;
	free(temp);
}
int main()
{
	Node *head, *tail;
	head = tail = NULL;
	Node* temp = new Node(10);
	head = tail = temp;
	temp = new Node(20);
	tail->next = temp;
	temp->prev = tail;
	tail = temp;
	temp = new Node(30);
	tail->next = temp;
	temp->prev = tail;
	tail = temp;
	temp = NULL;
	free(temp);
	printList(head);
	return 0;

}