#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf in a binary tree.
 * @node: A pointer to the node to check.
 *
 * Description: This function checks whether the given node is a leaf node,
 * which means it has no children (i.e., both left and right pointers are NULL).
 *
 * Return: 1 if the node is a leaf, otherwise 0.
 */

int binary_tree_is_leaf(const binary_tree_t *node)

{
	if (node == NULL)
	{
		return (0);
	}

	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	return (0);
}
