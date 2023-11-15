#include <stdio.h>
#include <stdlib.h>
#include "TP06.h"




int main(int argc, char *argv[]) 
{
	// Values to be added to the Splay tree are: 15 10 17 7 13 16

	struct node *root = NULL;
	// ...

	// Search for a key in the tree and splay it to the root
	int key_to_search = 10;  // Replace this with the key you want to search for
	printf("Preorder traversal after searching for %d:\n", key_to_search);
	printTreePreOrder(root);
	printf("\n");

	return 0;	
	
}
