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

void printList(Node * head)
{
	if (head == NULL)
		return;
	Node* temp = head;
	while (temp->next != NULL)
	{
		cout << temp->data << " --> ";
		temp = temp -> next;
	}
	cout << temp->data << endl;
}


int findLocation(Node* head, int x, int loc)  // O(n) where n is number of nodes in the linked list
{
	if (head == NULL)
		return -1;
	if (head->data == x)
		return loc;
	return findLocation(head->next, x, ++loc);
}

int main()
{
	// linked list creation
	int n, t;
	cin >> n;
	t = n;
	Node *head, *curr;
	head = curr = NULL;
	while (t--)  // O(n)
	{
		cin >> n;
		Node* temp = new Node(n);
		if (head == NULL)
			curr = head = temp;
		else
		{
			curr->next = temp;
			curr = temp;
		}
		temp = NULL;
		free(temp);
	}

	// searching logic starts here
	printList(head);  //O(n)
	int x;
	cin >> x;
	int loc = 1;
	cout << findLocation(head, x, loc) << endl;   // function takes O(n)
	return 0;

}

// total time = O(n)*3
// O(n) ignoring the leading constt

// auxilary space = O(n) the maximum height of function call stack