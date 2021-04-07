#pragma once
#include <algorithm>
#include <iostream>

template<class T>
class BinaryTree
{
	class TreeNode;

public:
	BinaryTree();
	BinaryTree(const T*, const int); //从数组构造二叉树
	~BinaryTree();
	void insert(const T& data);
	bool empty(void)

};

template<class T>
BinaryTree<T>::BinaryTree(const T*, const int)
{

}
