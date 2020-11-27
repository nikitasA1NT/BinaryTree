#include "BalancedBSTree.h"

BalancedBSTree::BalancedBSTree(BSTree& bTree)
{
	std::vector<int> elemsInTraversal = bTree.reverseTraversal();

	r_buildForCopyConstr(elemsInTraversal, 0, elemsInTraversal.size() - 1);
}

void BalancedBSTree::r_buildForCopyConstr(const std::vector<int>& sortedVect, int startIndex, int endIndex)
{
	if (startIndex > endIndex)
		return;

	int middleIndex = (startIndex + endIndex) / 2;

	r_insert(root, sortedVect[middleIndex]);

	r_buildForCopyConstr(sortedVect, startIndex, middleIndex - 1);
	r_buildForCopyConstr(sortedVect, middleIndex + 1, endIndex);
}
