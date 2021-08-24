#include <bits/stdc++.h>
using namespace std;


struct Node {
	int key;
	Node *left, *right;
	Node(int key)   // constructer
	{
		this->key = key;
		left = right = NULL;
	}
};

void inorder(Node *root) // O(n) , O(height)
{
	if (root != NULL)
	{
		inorder(root->left);
		cout << root->key << " ";
		inorder(root->right);
	}
}

void preorder(Node * root) // O(n) , O(height)
{
	if (root != NULL)
	{
		cout << root->key << " ";
		preorder(root->left);
		preorder(root->right);
	}
}

void postorder(Node *root) // O(n) , O(height)
{
	if (root != NULL)
	{
		postorder(root->left);
		postorder(root->right);
		cout << root->key << " ";
	}
}

int getHeight(Node *root)
{
	if (root == NULL)
		return 0;
	return max(getHeight(root->left), getHeight(root->right)) + 1;
}

void BFS(Node *root)
{
	if (root == NULL)
		return;
	queue<Node*> q;
	q.push(root);
	while (!q.empty())
	{
		Node *curr = q.front();
		q.pop();
		cout << curr->key << " ";
		if (curr->left != NULL)
			q.push(curr->left);
		if (curr->right != NULL)
			q.push(curr->right);
	}
	cout << endl;
}
int main()
{
	/*

			10

		/		\
	   20		 30

	 /   \
	40	  60


	// while(!q.empty()):
	// curr= q.front()
	// q.pop()
	// cout<<curr->key;
	// if(curr->left!=NULL)
		// q.push(root->left)
	// if(curr->right != NULL)
		// q.push(root->right);  // o(n) o(width)

	BFS: 10 20 30 40 60 7
	inorder: 7 40 20 60 10 30
	pre: 10 20 40 7 60 30
	post: 7 40 60 20 30 10
	height: 4

	*/

	Node *root = NULL; // empty tree
	root = new Node(10);
	root->left = new Node(20);
	root->right = new Node(30);
	root->left->left = new Node(40);
	root->left->right = new Node(60);
	inorder(root);
	cout << endl;
	preorder(root);
	cout << endl;
	postorder(root);
	cout << endl;
	cout << getHeight(root) << endl;
	BFS(root);
	return 0;


}