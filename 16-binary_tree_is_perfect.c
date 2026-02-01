#include "binary_trees.h"

/**
 * height - gives the height of a tree
 * @tree: binary tree
 *
 * Return: height of a tree
 */
int height(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left = height(tree->left) + 1;
	if (tree->right != NULL)
		right = height(tree->right) + 1;
	if (left > right)
		return (left);
	else
		return (right);
}

/**
 * full - check if a tree is full
 * @tree: binary tree
 *
 * Return: 1 on success 0 on failure
 */
int full(const binary_tree_t *tree)
{
	int i = 1;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (i);
	else if (tree->left != NULL && tree->right != NULL)
	{
		i = full(tree->left);
		if (i == 0)
			return (0);
		i = full(tree->right);
		return (i);
	}
	else
		return (0);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: binary tree
 *
 * Return: 1 on perfect 0 on else
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (tree == NULL)
		return (0);

	/* leaf is perfect */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* must have both children */
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	left = height(tree->left);
	right = height(tree->right);

	if (left != right)
		return (0);

	return (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right));
}

