#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: The height of the tree,
 * or 0 if the tree is NULL or a leaf node
 */

size_t _binary_tree_height(const binary_tree_t *tree)

{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	left_height = _binary_tree_height(tree->left);
	right_height = _binary_tree_height(tree->right);
	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: The balance factor of the tree, or 0 if the tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)

{
	int left_height;
	int right_height;

	if (tree == NULL)
	{
		return (0);
	}
	left_height = _binary_tree_height(tree->left);
	right_height = _binary_tree_height(tree->right);
	/** by soustracting the two hights we got the balance */
	return (left_height - right_height);
}
