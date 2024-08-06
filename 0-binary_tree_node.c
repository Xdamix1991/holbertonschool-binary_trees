#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_node - Creates a new binary tree node.
 * @parent: A pointer to the parent node. Can be NULL if the new node is root.
 * @value: The value to store in the new node.
 *
 * Return: A pointer to the newly created node, or NULL if allocation fails.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)

{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = value;
	new_node->parent = parent;

	new_node->right = NULL;
	new_node->left = NULL;

	return (new_node);
}
