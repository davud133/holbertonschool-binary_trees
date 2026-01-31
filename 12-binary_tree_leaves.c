#include "binary_trees.h"
/**
 * binary_trees_leaves - counts the number of leaves in a tree
 * @tree: binary tree
 *
 * Return: count of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t i = 0;
	if (tree != NULL)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (i + 1);
		if (tree->left != NULL)
			i += binary_tree_leaves(tree->left);
		if (tree->right != NULL)
			i += binary_tree_leaves(tree->right);
	}
	else
		return (0);
	return (i);
}
