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
	Node* temp = head;
	while (temp->next != NULL)
	{
		cout << temp->data << " --> ";
		temp = temp->next;
	}
	cout << temp->data << endl;
}

void deleteDesiredNode(Node* head, int loc)
{
	Node* p = head;
	int i = 1;
	while (p != NULL && i < loc - 1)
	{
		p = p->next;
		i++;
	}
	Node* q = p->next;
	p->next = q->next;
	q->next = NULL;
	free(q);

}

int main()
{
	int t, n;
	cin >> n;
	t = n;
	Node *head, *curr;
	head = curr = NULL;
	while (t--)
	{
		cin >> n;
		Node* temp = new Node(n);
		if (head == NULL)
			head = curr = temp;
		else
		{

			curr->next = temp;
			curr = temp;
		}
		temp = NULL;
		free(temp);
	}
	printList(head);
	int loc;
	cin >> loc;
	deleteDesiredNode(head, loc);
	printList(head);
	return 0;

}