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


int calculateSizeOfTree(Node* root)
{
	int count = 0;
	if (root == NULL)
		return count;
	queue<Node*> q;
	q.push(root);
	while (!q.empty())
	{
		Node *curr = q.front();
		q.pop();
		count++;
		if (curr->left != NULL)
			q.push(curr->left);
		if (curr->right != NULL)
			q.push(curr->right);
	}
	return count;
}

int  main()
{
	/*

				10

		   /		\
		  80		 70

		/	\
	    30	 40

	   size: 5

	*/

	Node* root = new Node(10);
	root->left = new Node(80);
	root->right = new Node(70);
	root->left->left = new Node(30);
	root->left->right = new Node(40);
	cout << calculateSizeOfTree(root) << endl;
	return 0;
}