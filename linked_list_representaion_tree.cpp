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

int main()
{
	Node* root = new Node(10);
	root->left = new Node(20);
	root->right = new Node(30);
	root->left->left = new Node(40);
}

/*

		ip:			10
				/		\
			  20		  30
			/	 			 \
		   30	              40

		o/p: 30 20 10 30 40n



*/