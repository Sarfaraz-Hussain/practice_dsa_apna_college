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

int preIndex = 0;
Node* constructTree(int in[], int pre[], int is, int ie)
{
	if (is > ie)
		return NULL;
	Node *root = new Node(pre[preIndex++]);
	int inIndex;
	for (int i = is; i <= ie; i++)
		if (in[i] == root->key)
		{
			inIndex = i;
			break;
		}
	root->left = constructTree(in, pre, is, inIndex - 1);
	root->right = constructTree(in, pre, inIndex + 1, ie);
	return root;
}

void inorder(Node * root)
{
	if (root != NULL)
	{
		inorder(root->left);
		cout << root->key << " ";
		inorder(root->right);
	}
}

int main()
{
	int n;
	cin >> n;
	int in[n];
	for (int i = 0; i < n; i++)
		cin >> in[i];
	int pre[n];
	for (int i = 0; i < n; i++)
		cin >> pre[i];
	Node *root = constructTree(in, pre, 0, n - 1);
	inorder(root);
	cout << endl;
	return 0;
}