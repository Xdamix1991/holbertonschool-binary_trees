#include "binary_trees.h"
/**
 * binary_tree_sibling - Finds the sibling of a given node
 * @node: Pointer to the node to find the sibling of
 * Return: Pointer to the sibling node, or NULL if the node or its sibling does not exist
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)

{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	/** Return the sibling node ( the brother or sister if it exist)*/
	if (node == node->parent->left)
		return (node->parent->right);
	else
		return (node->parent->left);
}
