#include "binary_trees.h"
/**
 * bianry_tree_postorder - goes through a binary tree usong postorder traversal
 * @tree: a binary tree
 * @func: a function to execute in all nodes
 *
 * Return: nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func != NULL && tree != NULL)
	{
		if (tree->left != NULL)
			binary_tree_postorder(tree->left, func);
		if (tree->right != NULL)
			binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
