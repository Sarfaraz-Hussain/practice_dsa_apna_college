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

void printList(Node* head)
{
	if (head == NULL)
		return;
	Node* temp = head;
	while (temp->next != NULL)
	{
		cout << temp->data << " --> ";
		temp = temp->next;
	}
	cout << temp->data << endl;

}

int findGivenElementLocation(Node* head, int x)
{
	if (head == NULL)
		return -1;
	int loc = 1;
	Node* temp = head;
	while (temp != NULL)
	{
		if (temp->data == x)
			return loc;
		loc++;
		temp = temp->next;
	}
	return -1;
}

int main()
{
	// linked list creation
	int n, t;
	cin >> n;
	t = n;
	Node *head, *curr;
	head = curr = NULL;
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
	// searching logic here
	int x;
	cin >> x;
	cout << findGivenElementLocation(head, x) << endl;
	return 0;

}