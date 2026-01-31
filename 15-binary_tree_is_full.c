#include "binary_trees.h"
/**
 * binary_tree_is_full - check if a binary tree is full
 * @tree: binary tree
 *
 * Return: 1 on success 0 on failure
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->right != NULL && tree->left != NULL)
		return (1);
	else if (tree->right == NULL && tree->left == NULL)
		return (1);
	else
		return (0);
	if (tree->left != NULL)
		return(binary_tree_is_full(tree->left));
	if (tree->right != NULL)
		return(binary_tree_is_full(tree->right));

}
