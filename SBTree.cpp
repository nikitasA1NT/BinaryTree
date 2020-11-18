#include "SBTree.h"

SBTree::SBTree(const std::initializer_list<int>& list):
	SBTree()
{
	for (int element : list)
		insert(element);
}

void SBTree::insert(int n)
{
	r_insert(root, n);
}

void SBTree::r_insert(TreeNode*& node, int info)
{
	if (!node)	// if current node is nullptr
		node = new TreeNode(info);	//	add element
	else
		if (info < node->info)
			r_insert(node->pLeft, info);
		else // if (info >= node->info)
			r_insert(node->pRight, info);
}

void SBTree::clear()
{
	r_clear(root);
}

void SBTree::r_clear(TreeNode*& node)
{
	if (node)
	{
		r_clear(node->pLeft);
		r_clear(node->pRight);
		delete node;
		node = nullptr;
	}
}

std::ostream& SBTree::r_print(std::ostream& out, TreeNode* node, int level)
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

std::ostream& operator<< (std::ostream& out, SBTree& binTree)
{
	const int zero = 0;

	return binTree.r_print(out, binTree.root, zero);
}
