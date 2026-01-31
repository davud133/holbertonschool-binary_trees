#include "binary_trees.h"
/**
 * bianry_tree_height - outputs the height of a tree
 * @tree: binary tree
 *
 * Return: height of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t i = 0;
	if (tree != NULL)
	{
		i = 1;
		if (tree->left != NULL)
			i += binary_tree_height(tree->left);
		if (tree->right != NULL)
			i += binary_tree_height(tree->right);
		i = i - 1;
	}
	return (i);
}

