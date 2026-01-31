#include "binary_trees.h"
/**
 * binary_tree_depth - prints out the the depth of a node
 * @tree: a pointer to node
 *
 * Return: the depth of a node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int i = 0;
	if (tree != NULL)
	{
		if (tree->parent != NULL)
			i = binary_tree_depth(tree->parent) + 1;
	}
	return (1);

