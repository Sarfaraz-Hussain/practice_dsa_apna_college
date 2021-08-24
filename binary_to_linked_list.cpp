#include <bits/stdc++.h>
using namespace std;

struct Node {
	int key;
	Node *left, *right;
	Node(int key)
	{
		this->key = key;
		left = right = NULL;
	}
};

Node *head = NULL;
Node *Prev = NULL;

void binaryToDoublyLinked(Node *root)
{
	if (root == NULL)
		return;
	binaryToDoublyLinked(root->left);
	if (Prev == NULL)
		head = root;
	else
	{
		root->left = Prev;
		Prev->right = root;
	}
	Prev = root;
	binaryToDoublyLinked(root->right);
}


void printList(Node *head)
{
	Node *curr = head;
	while (curr->right != NULL)
	{
		cout << curr->key << " <--> ";
		curr = curr->right;
	}
	cout << curr->key << endl;
}

int main()
{
	/*

			10

		/		\
	   20		 30

	 /   \
	40	  60

	*/
	Node *root = NULL; // empty tree
	root = new Node(10);
	root->left = new Node(20);
	root->right = new Node(30);
	root->left->left = new Node(40);
	root->left->right = new Node(60);
	binaryToDoublyLinked(root);
	printList(head);
	return 0;
}