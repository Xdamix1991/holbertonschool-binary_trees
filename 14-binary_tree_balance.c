#include "binary_trees.h"

/**
* binary_tree_height - Measures the height of a binary tree.
* @tree: Pointer to the root node of the tree to measure the height.
*
* Return: Height of the tree. If tree is NULL, return 0.
*/
unsigned int binary_tree_height_internal(const binary_tree_t *tree)
{
unsigned int left_height, right_height;

if (tree == NULL)
return (0);

left_height = binary_tree_height_internal(tree->left);
right_height = binary_tree_height_internal(tree->right);

return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
* binary_tree_balance - Measures the balance factor of a binary tree.
* @tree: Pointer to the root node of the tree to measure the balance factor.
*
* Return: Balance factor of the tree. If tree is NULL, return 0.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
unsigned int left_height, right_height;

if (tree == NULL)
return (0);

left_height = binary_tree_height_internal(tree->left);
right_height = binary_tree_height_internal(tree->right);

return ((int)left_height - (int)right_height);
}
