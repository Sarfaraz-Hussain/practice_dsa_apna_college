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

void levelOrder(Node *root)
{
	if (root == NULL)
		return;
	queue<Node*> q;
	q.push(root);
	while (!q.empty())
	{
		int cnt = q.size();
		for (int i = 0; i < cnt; i++)
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
	levelOrder(root);
	return 0;
}