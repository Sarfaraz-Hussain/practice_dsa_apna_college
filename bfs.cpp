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


void PrintNodesAtLevelK(Node* root, int k)
{
	if (root == NULL)
		return;
	if (k == 0)
		cout << root->key << " ";
	else
	{
		PrintNodesAtLevelK(root->left, k - 1);
		PrintNodesAtLevelK(root->right, k - 1);
	}
}

int calculateHeight(Node *root)
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
		8	   7   		 6
			/ 	 \
		   9	  15


		o/p: 10 20 30 8 7 6 9 15
	*/

// first i will find the height or number of level in binary tree
// for each i will call a fnction that prints nodes at that particular level

	Node *root = NULL;
	root = new Node(10);
	root->left = new Node(20);
	root->right = new Node(30);
	root->left->left = new Node(8);
	root->left->right = new Node(7);
	root->right->right = new Node(6);
	root->left->right->left = new Node(9);
	root->left->right->right = new Node(15);

	int height = calculateHeight(root);  // o(n)
	for (int i = 0; i < height; i++)  // o(n*h)
		PrintNodesAtLevelK(root, i);
	cout << "\n";
	return 0;

}

// O(n*h)  time
// o(h)  where h is the height of binary tree