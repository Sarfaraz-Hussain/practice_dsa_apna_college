#include <bits/stdc++.h>
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

void printList(Node* head)
{
	Node*temp = head;
	while (temp->next != NULL)
	{
		cout << temp->data << " --> ";
		temp = temp->next;
	}
	cout << temp->data << endl;
}

void deleteLastNode(Node* head)
{
	if (head == NULL)
	{
		cout << "linked list is empty" << endl;
		return;
	}
	Node*temp = head;
	while (temp->next->next != NULL)
	{
		temp = temp->next;
	}
	Node* p = temp->next;
	temp->next = NULL;
	free(p);

}

int main()
{
	// linked list creation
	int t, n;
	cin >> n;
	t = n;
	Node *head, *curr;
	curr = head = NULL;
	while (t--)
	{
		cin >> n;
		Node* temp = new Node(n);
		if (head == NULL)
		{
			head = curr = temp;
		}
		else
		{
			curr->next = temp;
			curr = temp;
		}
		temp = NULL;
		free(temp);
	}
	printList(head);
	deleteLastNode(head);
	printList(head);

}