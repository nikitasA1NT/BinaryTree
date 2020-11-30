#include <iostream>
#include <vector>
#pragma once

// Binary Search Tree without dublicates
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

	TreeNode* root;	// Root of a tree
	
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

	// Search element. If found returns "true"
	bool search(int key);

	// Search element. If found returns "true" and changes "element"
	bool search(int key, int& element);

	// Clear tree
	void clear();

	// Return auto sorted vector built during
	// the reverse tree traversal
	std::vector<int> reverseTraversal();


	friend std::ostream& operator<< (std::ostream& out, BSTree& binTree);

protected:	// "r_" - recursive private methods

	// Add element
	virtual void r_insert(TreeNode*& node, int n);

	// Search element. If found returns "true"
	bool r_search(TreeNode* node, int key, int& element);

	// Clear tree
	void r_clear(TreeNode*& node);

	// Return auto sorted vector built during
	// the reverse tree traversal
	void r_reverseTraversal(TreeNode* node, std::vector<int>& elemsInTraversal);

	// Print binary tree
	std::ostream& r_print(std::ostream& out, TreeNode* node, int level);
};
