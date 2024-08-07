#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_nodes - Counts the number of nodes with at least one child
 * @tree: Pointer to the root node of the tree
 * Return: number of nodes with at least one child
 */

size_t _binary_tree_nodes(const binary_tree_t *tree)

{
	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		return (1 + _binary_tree_nodes(tree->left) + _binary_tree_nodes(tree->right));
	return (0);
}

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: The height of the tree,
 * or 0 if the tree is NULL or a leaf node
 */

size_t __binary_tree_height(const binary_tree_t *tree)

{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	left_height = __binary_tree_height(tree->left);
	right_height = __binary_tree_height(tree->right);
	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Description: A perfect binary tree is one where all internal nodes
 * have exactly two children and all leaves are at the same level.
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)

{
	int left_height;
	int right_height;
	int balance;

	if (tree == NULL)
		return (0);

	/** clculates the balance between the heights of branches */
	left_height = __binary_tree_height(tree->left);
	right_height = __binary_tree_height(tree->right);

	balance = left_height - right_height;

	if (balance != 0)
		return (0);
	/** checks if the number of nodes is equal */
	if (_binary_tree_nodes(tree->left) != _binary_tree_nodes(tree->right))
		return (0);
	/** cheks the perfection of the tree */
	if (binary_tree_is_perfect(tree->left) == binary_tree_is_perfect(tree->right))
		return (1);

	return (0);
}
