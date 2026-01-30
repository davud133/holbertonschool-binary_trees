#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts node to right  node of another node
 * @parent: parent node of a node
 * @value: data of a node
 *
 * Return: pointer to new node or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right_node;

	if (parent == NULL)
		return (NULL);
	new_right_node = binary_tree_node(parent, value);
	if (new_right_node == NULL)
		return (NULL);
	if (parent->right == NULL)
	{
		parent->right = new_right_node;
	}
	else
	{
		parent->right->parent = new_right_node;
		new_right_node->right = parent->right;
		parent->right = new_right_node;
	}
	return (new_right_node);
}
