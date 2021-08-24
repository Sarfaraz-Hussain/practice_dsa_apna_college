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

void spiralTraversal(Node *root)
{
	if (root == NULL)
		return;
	queue<Node*> q;
	q.push(root);
	stack<int> s;
	bool reverse = false;
	while (!q.empty())
	{
		int cnt = q.size();
		for (int i = 0; i < cnt; i++)
		{
			Node *curr = q.front();
			q.pop();
			if (reverse)
				s.push(curr->key);
			else
				cout << curr->key << " ";
			if (curr->left != NULL)
				q.push(curr->left);
			if (curr->right != NULL)
				q.push(curr->right);
		}
		if (reverse)
		{
			while (!s.empty())
			{
				cout << s.top() << " ";
				s.pop();
			}
		}
		reverse = !reverse;
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
	spiralTraversal(root);
}

// time complexity is O(n)
// auxiliary space is O(width)