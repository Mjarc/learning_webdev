#include <stdio.h>
#include <stdlib.h>
#include "TP06.h"


struct node *createNode(int data) 
{

}

struct node *rightRotate(struct node *x) 
{

}

struct node *leftRotate(struct node *x) 
{

}

// This function brings the key at the root if the key is present in the tree.
// If the key is not present, then it brings the last accessed item at the root.
// This function modifies the tree and returns the new root.
struct node *splay(struct node *root, int key) 
{
    // Base cases: root is NULL or key is present at root


    // Key lies in the left subtree

        // Key is not in the tree, we are done


        // Zig-Zig (Left Left)
       
            // First recursively bring the key as the root of left-left
            

            // Do the first rotation for root, the second rotation is done after else
            
        // Zig-Zag (Left Right)
            // First recursively bring the key as the root of left-right
            

            // Do the first rotation for root->left
            


        // Do the second rotation for root

    	// Key lies in the right subtree

        // Key is not in the tree, we are done


        // Zag-Zig (Right Left)
            // Bring the key as the root of right-left
            

            // Do the first rotation for root->right

        // Zag-Zag (Right Right)
            // Bring the key as the root of right-right and do the first rotation
            

        // Do the second rotation for root
        
}



struct node *insertNode(struct node *root, int data) 
{

}

// The search function for the Splay tree. Note that this function
// returns the new root of the Splay Tree. If the key is present in the tree,
// then it is moved to the root.
struct node *search(struct node *root, int key) 
{

}

void printTreePreOrder(struct node *root) 
{
	// printf("%d ", root->data);

}
