﻿/*
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
	BSTree bTree{ 10, 22, 1, 3, 0, 41, -12, 2, 11, 4, -32, 8, 20, 10 };

	std::cout << "Binary search tree:" << std::endl << bTree << std::endl;

	BalancedBSTree balBTree = bTree;

	std::cout << "Balanced binary search tree:" << std::endl << balBTree << std::endl;

    return 0;
}
