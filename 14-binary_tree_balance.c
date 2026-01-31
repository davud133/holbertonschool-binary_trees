#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: binary tree
 *
 * Return: integer
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;
	if (tree != NULL)
	{
		if (tree->left != NULL)
			left = binary_tree_balance(tree->left) + 1;
		if (tree->right != NULL)
			right = binary_tree_balance(tree->right) + 1;
	}
	else
		return (0);
	return (left - right);
