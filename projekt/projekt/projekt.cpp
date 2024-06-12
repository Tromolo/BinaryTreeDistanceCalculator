#include <iostream>
#include "BinaryTree.h"
#include "Node.h"

using namespace std;

int main()
{
	BinaryTree tree(1);
	tree.root->left = new Node(2);
	tree.root->right = new Node(3);
	tree.root->left->left = new Node(4);
	tree.root->left->right = new Node(5);
	tree.root->right->right = new Node(6);
	tree.root->left->right->left = new Node(7);
	tree.root->left->right->right = new Node(8);
	tree.root->right->right->right = new Node(9);
	tree.root->right->right->right->right = new Node(10);

	int source = 8;

	tree.printDistances (source);

	BinaryTree tree2(1);
	tree2.root->left = new Node(2);
	tree2.root->right = new Node(3);
	tree2.root->left->left = new Node(4);
	tree2.root->left->right = new Node(5);
	tree2.root->right->right = new Node(7);
	tree2.root->left->left->left = new Node(8);
	tree2.root->left->right->left = new Node(10);

	int source2 = 1;

	tree2.printDistances(source2);

	return 0;
}

