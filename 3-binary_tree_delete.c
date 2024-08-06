#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_delete - Deletes the root node of a binary tree.
 * @tree: A pointer to the root node of the tree to delete.
 *
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *temp;
	binary_tree_t *new_root;

	new_root = NULL;

	if (tree == NULL)

	{
		return;
	}
		if (tree->left != NULL)
		{
			new_root = tree->left;
			temp = new_root;
			if (tree->right != NULL)
			{
				temp = tree->left;
				while (temp->right != NULL)
				{
					temp = temp->right;
				}
				temp->right = tree->right;
				if (tree->right != NULL)
				{
					tree->right->parent = temp;
				}
			}
		else
		{
			new_root = tree->right;
		}
		}
		free(tree);
	}

