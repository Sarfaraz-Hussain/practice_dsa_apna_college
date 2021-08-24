#include <iostream>
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


int calculateSizeOfTree(Node *root)
{
	if (root == NULL)
		return 0;
	return 1 + calculateSizeOfTree(root->left) + calculateSizeOfTree(root->right);
}

int main()
{
	/*

				10

		   /		\
		  80		 70

		/	\
	    30	 40

	    ans: 5
	*/

	Node* root = new Node(10);
	root->left = new Node(80);
	root->right = new Node(70);
	root->left->left = new Node(30);
	root->left->right = new Node(40);

	cout << calculateSizeOfTree(root) << endl;
	return 0;
}