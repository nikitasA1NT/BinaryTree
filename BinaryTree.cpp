#include "BinaryTree.h"

void BinaryTree::addElement(int n)
{
	r_addElement(root, n);
}

void BinaryTree::r_addElement(TreeNode* node, int info)
{
	if (!node)	// if current node is nullptr
		node = new TreeNode(info);	//	add element
	else
		if (info < node->info)
			r_addElement(node->pLeft, info);
		else // if (info >= node->info)
			r_addElement(node->pRight, info);
}
