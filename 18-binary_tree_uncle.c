#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_uncle - Finds the uncle of a given node
 * @node: Pointer to the node to find the uncle
 * Return: Pointer to the uncle node, or NULL uncle does not exist
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	/** Check if the node or its parent is NULL */
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	/** Check if the parent is the left or right child of the grandparent */
	if (node->parent == node->parent->parent->left)
		/* Parent is the left child of the grandparent, uncle is the right child */
		return (node->parent->parent->right);

	/** Parent is the right child of the grandparent, uncle is the left child */
	return (node->parent->parent->left);
}
