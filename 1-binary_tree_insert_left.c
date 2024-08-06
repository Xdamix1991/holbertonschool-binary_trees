#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_insert_left - Inserts a node as the left child of another node.
 * @parent: A pointer to the parent node. Can be NULL if the new node is root.
 * @value: The value to store in the new node.
 *
 * Return: A pointer to the newly created node
 * or NULL if allocation fails or if the parent is NULL.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)

{
	binary_tree_t *new_node_left;

	if (parent == NULL)
	{
		return (NULL); /* Return NULL if parent is NULL */
	}

	new_node_left = malloc(sizeof(binary_tree_t));
	if (new_node_left == NULL)
	{
		return (NULL);
	}
	new_node_left->parent = parent;
	new_node_left->n = value;
	new_node_left->left = NULL;
	new_node_left->right = NULL;

	if (parent->left != NULL)
	{
		/* The existing left child will be a left child of the new node */
		new_node_left->left = parent->left;
		parent->left->parent = new_node_left;
	}

	/** Set the new node as the left child of the parent */
	parent->left = new_node_left;
	return (new_node_left);
}
