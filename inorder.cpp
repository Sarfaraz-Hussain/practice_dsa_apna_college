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

// Recursive inorder traversal
void inorder(Node* root)
{
	if (root != NULL)
	{
		inorder(root->left);
		cout << root->key << " ";
		inorder(root->right);
	}
}

void preorder(Node* root)
{
	if (root != NULL)
	{
		cout << root->key << " ";
		preorder(root->left);
		preorder(root->right);
	}
}

void postorder(Node* root)
{
	if (root != NULL)
	{
		postorder(root->left);
		postorder(root->right);
		cout << root->key << " ";

	}
}
int main()
{
	/*

				10

			/		\
		   20		30

		   		/		\
		   	   40		 50

		in: 20 10 40 30 50
		pre: 10 20 30 40 50
		post: 20 40 50 30 10

	*/

	Node* root = NULL; // empty tree
	// construct binary tree
	root = new Node(10);
	root->left = new Node(20);
	root->right = new Node(30);
	root->right->left = new Node(40);
	root->right->right = new Node(50);

	inorder(root);
	cout << "\n";
	preorder(root);
	cout << "\n";
	postorder(root);
	cout << "\n";
	return 0;


}

