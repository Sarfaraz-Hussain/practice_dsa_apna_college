#include <iostream>
using namespace std;

// n=6  10->20->30->40->50->60
//Node structure
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

int main()
{
	int n, t;
	cin >> n;
	t = n;
	Node* head = NULL;
	Node* curr = NULL;
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
	return 0;
}
// O(n) + O(n) = O(n) linear time complexity