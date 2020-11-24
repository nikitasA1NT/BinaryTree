#include <iostream>
#pragma once

// Binary Search Tree
class BSTree
{
	// Prevent copy constructor
	BSTree(const BSTree& binTree);

protected:

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

	int amountOfElems;	// Amount of elements

	TreeNode* root;	// Root of a tree
	
public:

	// Constructors & destructor

	// Default
	BSTree();

	// Initialization with {  }
	BSTree(const std::initializer_list<int>& list);


	// Add element
	void insert(int n);

	// Clear tree
	void clear();

	// Return pointer to the array built during
	// the reverse tree traversal
	int* reverseTraversal();

	// Amount of elements
	int getAmount() { return amountOfElems; };


	friend std::ostream& operator<< (std::ostream& out, BSTree& binTree);

protected:	// "r_" - recursive private methods

	// Add element
	virtual void r_insert(TreeNode*& node, int n);

	// Clear tree
	void r_clear(TreeNode*& node);

	// Print binary tree
	std::ostream& r_print(std::ostream& out, TreeNode* node, int level);
};
