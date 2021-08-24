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

void printList(Node* head)
{
	Node* temp = head;
	while (temp->next != NULL)
	{
		cout << temp->data << " --> ";
		temp = temp->next;
	}
	cout << temp->data << endl;
}

Node* deleteFirstNode(Node* head)
{
	Node* temp = head;
	head = head->next;
	temp->next = NULL;
	delete(temp);
	return head;
}

int main()
{
	int n, t;
	cin >> n;
	t = n;
	Node  *head, *curr;  // take care here
	head = curr = NULL;
	while (t--)
	{
		cin >> n;
		Node* temp = new Node(n);
		if (head == NULL) {
			head = temp;
			curr = head;
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
	head = deleteFirstNode(head);
	printList(head);
	return 0;
}
