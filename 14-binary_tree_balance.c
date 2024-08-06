#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: The balance factor of the tree, or 0 if the tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)

{
	size_t left_height;
	size_t right_height;

	left_height = 0;
	right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	/** by soustracting the two hights we got the balance */
	return (left_height - right_height);
}
