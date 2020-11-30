#pragma once
#include "BSTree.h"

// AVL balanced binary search tree without dublicates
class BalancedBSTree :
    public BSTree
{
public:

    // Copy constuctor from a base class object
    BalancedBSTree(BSTree& bTree);

    void insert(int n) = delete;

private:

    // Building a tree with a sorted vector
    void r_buildForCopyConstr(const std::vector<int>& sortedVect, int startIndex, int endIndex);
};
