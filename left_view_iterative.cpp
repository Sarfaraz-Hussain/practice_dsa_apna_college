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


void printLeftView(Node *root)
{
	if (root == NULL)
		return;
	queue<Node*> q;
	cout << root->key << " ";
	q.push(root);
	q.push(NULL);
	while (q.size() > 1)
	{
		Node*curr = q.front();
		q.pop();
		if (curr == NULL)
		{
			cout << q.front()->key << " ";
			q.push(NULL);
			continue;

		}
		if (curr->left != NULL)
			q.push(curr->left);
		if (curr->right != NULL)
			q.push(curr->right);
	}
}

int main()
{
	/*

			20

	   /		\
	  8		     12

	/	\
	3 	 5

	ans: yes

	*/
	Node* root = new Node(20);
	root->left = new Node(8);
	root->right = new Node(12);
	root->left->left = new Node(3);
	root->left->right = new Node(5);
	printLeftView(root);
	cout << endl;
}


// time O(n)
// Auxiliary Space : O(width)