#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_insert_right - Creates a new binary tree node.
 * @parent: A pointer to the parent node. Can be NULL if the new node is root.
 * @value: The value to store in the new node.
 *
 * Return: A pointer to the newly created node, or NULL if allocation fails.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)

{
binary_tree_t *new_node_right;

if (parent == NULL)
	{
		return (NULL); /* Return NULL if parent is NULL */
	}

	new_node_right = malloc(sizeof(binary_tree_t));
	if (new_node_right == NULL)
	{
		return (NULL);
	}
	new_node_right->parent = parent;
	new_node_right->n = value;
	new_node_right->left = NULL;
	new_node_right->right = NULL;

	if (parent->right != NULL)
	{
		/* The existing left child will be a left child of the new node */
		new_node_right->right = parent->right;
		parent->right->parent = new_node_right;
	}

	/** Set the new node as the left child of the parent */
	parent->right = new_node_right;

	return (new_node_right);

}
