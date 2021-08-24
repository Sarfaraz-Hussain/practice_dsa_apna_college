#include <bits/stdc++.h>
using namespace std;

// tree Node structure
struct Node {
	int key;
	Node *left, *right;
	Node(int key)
	{
		this->key = key;
		left = right = NULL;
	}
};


void BFS(Node* root)
{
	if (root == NULL)
		return;
	queue<Node*> q;
	q.push(root);
	while (!q.empty())
	{
		Node *curr = q.front();
		q.pop();
		cout << curr->key << " ";
		if (curr->left != NULL)
			q.push(curr->left);
		if (curr->right != NULL)
			q.push(curr->right);
	}
	cout << endl;
}

int main()
{
	/*

				10

		   /		\
		  80		 70

		/	\
	    30	 40

	   BFS: 10 80 70 30 40

	*/
	Node* root = new Node(10);
	root->left = new Node(80);
	root->right = new Node(70);
	root->left->left = new Node(30);
	root->left->right = new Node(40);
	BFS(root);
	return 0;
}
