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

int ans = 0;

int height(Node *root)
{
	if (root == NULL)
		return 0;
	int lh = height(root->left);
	int rh = height(root->right);
	ans = max(ans, lh + rh + 1);
	return 1 + max(lh, rh);
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
	cout << height(root) << endl;
	cout << ans << endl;
	return 0;
}