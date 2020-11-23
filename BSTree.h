#include <iostream>
#pragma once

// Binary Search Tree
class BSTree
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
	BSTree(const BSTree& binTree);
	
public:

	// Constructors & destructor

	// Default
	BSTree() { this->root = nullptr; }
	// Destructor
	~BSTree() { clear(); }

	// Initialization with {  }
	BSTree(const std::initializer_list<int>& list);


	// Add element
	void insert(int n);

	// Clear tree
	void clear();


	friend std::ostream& operator<< (std::ostream& out, BSTree& binTree);

private:	// "r_" - recursive private methods

	// Add element
	void r_insert(TreeNode*& node, int n);

	// Clear tree
	void r_clear(TreeNode*& node);

	// Print binary tree
	std::ostream& r_print(std::ostream& out, TreeNode* node, int level);
};
