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

bool isChildern(Node* root)
{
	if (root == NULL)
		return true;
	queue<Node*> q;
	q.push(root);
	Node *l, *r;
	Node *temp = new Node(0);
	while (!q.empty())
	{
		Node *curr = q.front();
		q.pop();
		if (curr->left == NULL && curr->right == NULL)
			continue;
		if (curr->left != NULL)
		{
			l = curr->left;
			q.push(l);
		}
		else
		{
			l = temp;
		}
		if (curr->right != NULL)
		{
			r = curr->right;
			q.push(r);
		}
		else
			r = temp;
		if (curr->key != l->key + r->key)
			return false;
	}
	return true;


}

int main()
{
	/*

			10

	   /		\
	  8          2
	  			/
	  		   3

	ans: yes

	*/
	Node* root = new Node(10);
	root->left = new Node(8);
	root->right = new Node(2);
	root->right->left = new Node(3);
	// root->left->right = new Node(5);
	if (isChildern(root))
		cout << "yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
