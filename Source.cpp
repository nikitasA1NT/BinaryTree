/*
Тема 3, Деревья 1, 3.31:

По входной последовательности целых чисел построить бинарное дерево.
По построенному бинарному дереву поиска построить сбалансированное бинарное дерево поиска.
Можно использовать массив и сортировку.

Автор - Пирожков Никита Вячеславович, группа ИТ-21
*/

#include <iostream>
#include "BSTree.h"
#include "BalancedBSTree.h"

int main()
{
	BSTree bTree{ 73, 82, 47, 80, 71, 77, 99, 84, 62, 71, 4, 89, 21, 79, 33, 60, 89, 88, 59, 12 };

	std::cout << "Binary search tree:" << std::endl << bTree << std::endl;

	BalancedBSTree balBTree = bTree;

	std::cout << "Balanced binary search tree:" << std::endl << balBTree << std::endl;

    return 0;
}
