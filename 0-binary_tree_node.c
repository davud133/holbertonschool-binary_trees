#include "binary_trees.h"
/**
 * binary_tree_node - creates a node for a binary tree
 * @parent: parent node of new node
 * @value: data of new node
 *
 * Return: pointer to new created node or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->parent = NULL;
	new_node->n = value;
	return (new_node);
}
