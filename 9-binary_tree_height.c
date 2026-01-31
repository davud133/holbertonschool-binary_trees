#include "binary_trees.h"
/**
 * bianry_tree_height - outputs the height of a tree
 * @tree: binary tree
 *
 * Return: height of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;
	if (tree != NULL)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (0);
		if (tree->left != NULL)
			left = binary_tree_height(tree->left);
		if (tree->right != NULL)
			right = binary_tree_height(tree->right);
	}
	else
		return (0);
	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}

