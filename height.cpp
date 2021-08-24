#include<bits/stdc++.h>
using namespace std;

struct Node {
	int key;
	Node *left, *right;
	Node(int key) {
		this->key = key;
		left = right = NULL;
	}
};


int calculateHeight(Node* root)
{
	if (root == NULL)
		return 0;
	return 1 + max(calculateHeight(root->left), calculateHeight(root->right));
}

int main()
{
	/*
				10

			/		\
		   20		 30

		/	  \			\
	   40	   50		 70
	*/

	Node *root = NULL;
	root = new Node(10);
	root->left = new Node(8);
	root->right = new Node(30);
	root->right->left = new Node(40);
	root->right->right = new Node(50);
	root->right->right->left = new Node(70);

	cout << "Height is: " << calculateHeight(root) << endl;
	return 0;
}
