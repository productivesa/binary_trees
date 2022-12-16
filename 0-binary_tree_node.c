#include "binary_trees.h"

/**
 * binary_tree_node - create binary code
 * @parent: parent node
 * @value: node of value
 * Return: new node pointer or null
 */
binary_tree_t 8binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node_n;

	node_n = malloc(sizeof(binary_tree_t));
	if (node_n == NULL)
	{
		return (NULL);
	}
	node_n->parent  = parent;
	node_n->n = value;
	node_n->left = NULL;
	node_n->right = NULL;

	return (node_n);
}
