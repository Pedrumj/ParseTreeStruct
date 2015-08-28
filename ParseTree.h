#include "stdafx.h"



struct ParseTree{
	struct ParseTree *Parent;
	struct ParseTree *Next;
	struct ParseTree *FirstChild;
	int value;
};

//Add new production to tree
//__Node: Node to add the child nodes to
//__input: an array of values to add
//__countInput: the number of input values
void Add(struct ParseTree *__Node, int *__input, int __countInput);



//When a terminal is added to the tree the pointer must move up the tree to the next stack location
//keeps going up until a sibling is found
struct ParseTree* GetNextInStack(struct ParseTree *__Node);
//creates an empty node. Used to create the root
struct ParseTree *NewParseTree();
//prints the tree
void PrintTree(struct ParseTree *_ptrHeader);