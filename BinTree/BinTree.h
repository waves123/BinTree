#ifndef __BIN_TREE_
#define __BIN_TREE_

#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef struct Node Node;
typedef struct BinTree BinTree;

typedef struct Node
{
	void *data;
	Node *rChild;
	Node *lChild;
} Node;

typedef struct BinTree
{
	Node *rootNode;
} BinTree;
#endif