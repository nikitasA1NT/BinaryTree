#pragma once

// Binary Search Tree
class BinaryTree
{
	// Element of a binary tree
	struct TreeNode
	{
		int info;	// Information part
		TreeNode* pLeft, * pRight;	// Left & right branches

		TreeNode(int info, TreeNode* pLeft = nullptr, TreeNode* pRight = nullptr)
		{
			this->info = info;
			this->pLeft = pLeft;
			this->pRight = pRight;
		}
	};


	TreeNode* root;	// Root of a tree

public:

	// Constructors & destructor
	BinaryTree() { this->root = nullptr; }

	// Add element
	void addElement(int n);


private:	// "r_" - recursive private methods

	// Add element (private)
	void r_addElement(TreeNode* node, int n);
};
