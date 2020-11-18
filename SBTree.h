#include <iostream>
#pragma once

// Binary Search Tree
class SBTree
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

	// Prevent copy constructor
	SBTree(const SBTree& binTree);
	
public:

	// Constructors & destructor

	// Default
	SBTree() { this->root = nullptr; }

	// Initialization with {  }
	SBTree(const std::initializer_list<int>& list);


	// Add element
	void insert(int n);

	// Clear tree
	void clear();


	friend std::ostream& operator<< (std::ostream& out, SBTree& binTree);

private:	// "r_" - recursive private methods

	// Add element
	void r_insert(TreeNode*& node, int n);

	// Clear tree
	void r_clear(TreeNode*& node);

	// Print binary tree
	std::ostream& r_print(std::ostream& out, TreeNode* node, int level);
};
