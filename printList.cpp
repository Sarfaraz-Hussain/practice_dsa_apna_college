#include <iostream>
using namespace std;
// structure of the node


// class Node {
// public:
// 	int data;
// 	Node* next;
// 	Node(int data)
// 	{
// 		this->data = data;
// 		next = NULL;
// 	}
// };
struct Node {
	int data;
	Node *next;
	Node(int data)  // parameterized contructer used to initilize the object
	{
		this->data = data;
		next = NULL;
	}
};

// this function is used to print the linked list
void printList(Node* head)
{
	if (head == NULL)
		return;
	else
	{
		Node* temp = head;
		while (temp != NULL)
		{
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << endl;
	}
}

int main()
{
	Node* head = new Node(10);
	head->next = new Node(20);
	head->next -> next = new Node(30);

	// list is created how to print lets see

	printList(head);
	return 0;
}


// this is a c++ solution
// now lets jump on the java solution
