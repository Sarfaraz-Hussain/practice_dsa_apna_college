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

int getMax(Node* root)
{
	if (root == NULL)
		return INT_MIN;
	return max({
		getMax(root->left),
		getMax(root->right),
		root->key
	});
}

int main()
{
	/*

			10

	   /		\
	  20		 70

	/	\
	30	 40

	max value: 70

	*/

	Node* root = new Node(10);
	root->left = new Node(20);
	root->right = new Node(70);
	root->left->left = new Node(30);
	root->left->right = new Node(40);
	cout << getMax(root) << endl;
}