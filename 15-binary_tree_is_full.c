#include "binary_trees.h"
/**
 * binary_tree_is_full - check if a binary tree is full
 * @tree: binary tree
 *
 * Return: 1 on success 0 on failure
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int i = 1;
	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		i = binary_tree_is_full(tree->left);
	if (tree->right != NULL)
		i = binary_tree_is_full(tree->right);
	if (tree->left != NULL && tree->right != NULL)
		return (1);
	else if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
		return (0);
	return (i);
}
