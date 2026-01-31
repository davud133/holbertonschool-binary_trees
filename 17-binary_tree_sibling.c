#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: node
 *
 * Return: pointer
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == NULL || node->parent->right == NULL)
		return (NULL);
	if (node->parent->left == node)
	{
		if (node->parent->right != NULL)
			return (node->parent->right);
		return (NULL);
	}
	else
	{
		if (node->parent->left != NULL)
			return (node->parent->left);
		else
			return (NULL);
	}
}
