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
	{
		cout << root->key << " ";
	} else {

		PrintNodesAtLevelK(root->left, k - 1);
		PrintNodesAtLevelK(root->right, k - 1);
	}

}

int main()
{
	/*
			10

		/		\
	   20		 30

	  /	 \			\
	 40	  50		 70

	*/


	Node* root = NULL;
	root = new Node(10);
	root->left = new Node(20);
	root->right = new Node(30);
	root->left->left = new Node(40);
	root->left->right = new Node(50);
	root->right->right = new Node(70);

	int k;
	cin >> k;
	PrintNodesAtLevelK(root, k);
	cout << endl;
}