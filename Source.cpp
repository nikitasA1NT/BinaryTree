/*
Тема 3, Деревья 1, 3.31:

По входной последовательности целых чисел построить бинарное дерево.
По построенному бинарному дереву поиска построить сбалансированное бинарное дерево поиска.
Можно использовать массив и сортировку.

Автор - Пирожков Никита Вячеславович, группа ИТ-21
*/

#include <iostream>
#include "BinaryTree.h"

int main()
{
	BinaryTree bTree;
	bTree.addElement(10);
	bTree.addElement(22);
	bTree.addElement(1);
	bTree.addElement(3);
	bTree.addElement(0);
	bTree.addElement(41);
	bTree.addElement(-12);
	bTree.addElement(2);
	bTree.addElement(11);
	bTree.addElement(4);
	bTree.addElement(-32);
	bTree.addElement(8);
	bTree.addElement(20);
	bTree.addElement(10);

	std::cout << bTree;

    return 0;
}
