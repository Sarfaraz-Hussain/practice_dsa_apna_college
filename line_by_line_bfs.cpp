#include<bits/stdc++.h>
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

void BFSLineByLine(Node*root)
{
	if (root == NULL)
		return;
	queue<Node*> q;
	q.push(root);
	q.push(NULL);   // end end of line marker
	while (q.size() > 1)
	{
		Node *curr = q.front();
		q.pop();
		if (curr == NULL)
		{
			q.push(NULL);
			cout << endl;
			continue;
		}
		cout << curr->key << " ";
		if (curr->left != NULL)
			q.push(curr->left);
		if (curr->right != NULL)
			q.push(curr->right);

	}
	cout << "\n";
}

int main()
{
	/*

				10

		   /		\
		  80		 70

		/	\
	    30	 40

	   BFS:

	*/
	Node* root = new Node(10);
	root->left = new Node(80);
	root->right = new Node(70);
	root->left->left = new Node(30);
	root->left->right = new Node(40);
	BFSLineByLine(root);
	return 0;
}