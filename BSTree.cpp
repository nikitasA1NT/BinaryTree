#include "BSTree.h"

BSTree::BSTree(const std::initializer_list<int>& list):
	BSTree()
{
	for (int element : list)
		insert(element);
}

void BSTree::insert(int n)
{
	r_insert(root, n);
}

void BSTree::r_insert(TreeNode*& node, int info)
{
	if (!node)	// if current node is nullptr
		node = new TreeNode(info);	//	add element
	else
		if (info < node->info)
			r_insert(node->pLeft, info);
		else // if (info >= node->info)
			r_insert(node->pRight, info);
}

void BSTree::clear()
{
	r_clear(root);
}

void BSTree::r_clear(TreeNode*& node)
{
	if (node)
	{
		r_clear(node->pLeft);
		r_clear(node->pRight);
		delete node;
		node = nullptr;
	}
}

std::ostream& BSTree::r_print(std::ostream& out, TreeNode* node, int level)
{
	if (node)
	{
		r_print(out, node->pRight, level + 1);
		for (int i = 0; i < level; i++)
			out << "    ";
		out << node->info << std::endl;
		r_print(out, node->pLeft, level + 1);
	}

	return out;
}

std::ostream& operator<< (std::ostream& out, BSTree& binTree)
{
	const int zero = 0;

	return binTree.r_print(out, binTree.root, zero);
}
