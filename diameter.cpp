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

int getHeight(Node *root)
{
	if (root == NULL)
		return 0;
	return 1 + max(getHeight(root->left) , getHeight(root->right));
}

int ans = 0;
int getDiameter(Node *root)
{
	if (root == NULL)
		return 0;
	queue<Node*> q;
	q.push(root);
	while (!q.empty())
	{
		Node *curr = q.front();
		q.pop();
		ans = max(ans, getHeight(root->left) + getHeight(root->right) + 1);
		if (curr->left != NULL)
			q.push(curr->left);
		if (curr->right != NULL)
			q.push(curr->right);
	}
	return ans;
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
	cout << getDiameter(root);
	cout << endl;
	return 0;
}