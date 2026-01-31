#include "binary_trees.h"
int height(const binary_tree_t *tree)
{
	int left = 1;
	int right = 1;
	if (tree != NULL)
	{
		if (tree->left != NULL)
			left = height(tree->left) + 1;
		if (tree->right != NULL)
			right = height(tree->right) + 1;
	}
	else
		return (0);
	if (left > right)
		return  (left);
	else
		return (right);
}
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: binary tree
 *
 * Return: integer
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance;

	if (tree == NULL)
		return (0);
	balance = height(tree->left) - height(tree->right);
	return (balance);
}
