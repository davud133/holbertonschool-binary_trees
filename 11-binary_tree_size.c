#include "binary_trees.h"
/**
 * binary_tree_size - gives the size of a binary tree
 * @tree: binary tree
 *
 * Return: size of a binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t i = 1;
	if (tree != NULL)
	{
		if (tree->left != NULL)
			i = binary_tree_size(tree->left) + 1;
		if (tree->right != NULL)
			i = binary_tree_size(tree->right) + 1;
	}
	else
		return (0);
	return (i);
}
