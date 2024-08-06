#include "binary_trees.h"

/**
* binary_tree_height - Measures the height of a binary tree
* @tree: Pointer to the root node of the tree to measure the height
*
* Return: Height of the tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
if (tree == NULL) /* If the tree is empty */
	{
	return (0); /* Return height as 0 */
	}
	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}


	int binary_tree_balance(const binary_tree_t *tree)
	{
	if (tree == NULL) /* If the tree is empty */
		{
		return (0); /* Return balance factor as 0 */
		}
	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

return (left_height - right_height);
}
