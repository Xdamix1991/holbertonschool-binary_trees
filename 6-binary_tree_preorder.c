#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_preorder - Traverses a binary tree in pre-order
 *
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node's value
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))

{
	if (tree == NULL || func == NULL)
		return;

	/** recursivly traverse the left subtree */
	binary_tree_preorder(tree->left, func);
	/** recursivly traverse the right subtree */
	binary_tree_preorder(tree->right, func);

	/** call the function with the value of the current node */
	func(tree->n);
}