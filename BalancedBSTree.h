#pragma once
#include "BSTree.h"

// AVL balanced binary search tree
class BalancedBSTree :
    public BSTree
{
public:

    BalancedBSTree(const BSTree& bTree)
    {

    }

    void insert(int n) = delete;
};
