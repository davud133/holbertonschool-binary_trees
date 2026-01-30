#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts node to left node of another node
 * @parent: parent node of a node
 * @value: data of a node
 *
 * Return: pointer to new node or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_node = binary_tree_node(parent, value);

	if (parent->left == NULL)
	{
		parent->left = new_left_node;
	}
	else
	{
		parent->left->parent = new_left_node;
		new_left_node->left = parent->left;
		parent->left = new_left_node;
	}
	return (new_left_node);
}
