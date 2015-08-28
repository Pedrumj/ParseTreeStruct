# ParseTreeStruct

The ParseTreeStruct.h is a tree data structure. The structure appears as follows:

<pre><code>
struct ParseTree{
	struct ParseTree *Parent;
	struct ParseTree *Next;
	struct ParseTree *FirstChild;
	int value;
};
</code>
</pre>
Each node can have unlimited child nodes. 
Each node is connected to its first child node and the next sibling. 
Each node has reference to its parent.

#Example
In the figure below each number is a node.
1: Is the root
2, 3, 4 and 6 are all child nodes of the root
7 is the child of 2
8, 9, 10 and 11 are the child nodes of 3
<pre>
                                    1
                                    |
                                    2->3->4->6
                                    |  |
                                    7  |
                                       |
                                       8->9->10->11
</pre>
