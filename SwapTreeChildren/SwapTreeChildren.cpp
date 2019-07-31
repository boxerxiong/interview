// SwapTreeChildren.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

struct Node
{
	Node(int d)
	{
		left = right = NULL;
		data = d;
	}
	Node* left;
	Node* right;
	int data;
};

Node* BuildTestTree()
{
	Node* node1 = new Node(1);
	Node* node2 = new Node(2);
	Node* node3 = new Node(3);
	Node* node4 = new Node(4);
	Node* node5 = new Node(5);
	Node* node6 = new Node(6);
	Node* node7 = new Node(7);
	
	node4->left = node1;
	node4->right = node2;

	node1->left = node3;
	node1->right = node5;

	node2->left = node6;
	node2->right = node7;

	return node4;
}

void ShowTree(Node* n, int depth)
{
	if (NULL == n)
	{
		return;
	}
	for (size_t i = 0; i < depth; i++)
	{
		printf("--");
	}
	printf("%d\n", n->data);
	ShowTree(n->left, depth + 1);
	ShowTree(n->right, depth + 1);
}

void SwapTreeChildren(Node* n)
{

}

int main()
{
	Node* tree = BuildTestTree();
	ShowTree(tree, 0);
	//SwapTreeChildren(tree);
	//ShowTree(tree, 0);

	return 0;
}
