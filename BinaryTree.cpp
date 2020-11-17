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

std::ostream& BinaryTree::r_printTree(std::ostream& out, TreeNode* node, int level)
{
	if (node)
	{
		r_printTree(out, node->pLeft, level + 1);
		for (int i = 0; i < level; i++)
			out << "   ";
		out << node->info << std::endl;
		r_printTree(out, node->pRight, level + 1);
	}

	return out;
}

std::ostream& operator<< (std::ostream& out, BinaryTree& binTree)
{
	const int zero = 0;

	return binTree.r_printTree(out, binTree.root, zero);
}
