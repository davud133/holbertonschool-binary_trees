#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: binary tree
 *
 * Return: count of nodes with at least 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t i = 0;
	if (tree == NULL)
	{
		if (tree->left != NULL && tree->right != NULL)
		{
			i = 1;
			if (tree->left != NULL)
				i += binary_tree_nodes(tree->left);
			if (tree->left != NULL)
				i += binary_tree_nodes(tree->right);
		}
	}
	return (i);
}
