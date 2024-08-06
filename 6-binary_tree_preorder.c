#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
* binary_tree_preorder - Traverses a binary tree in pre-order
* @tree: Pointer to the root node of the tree to traverse
* @func: Pointer to a function to call for each node's value
*
* Return: void
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;

/* Call the function with the value of the current node */
func(tree->n);

/* Recursively traverse the left subtree */
binary_tree_preorder(tree->left, func);

/* Recursively traverse the right subtree */
binary_tree_preorder(tree->right, func);
}
