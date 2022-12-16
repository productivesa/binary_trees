#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree mode
 * @parent: node parent
 * @value: node value
 * Return: pointer to the new node or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node_n;

	node_n = malloc(sizeof(binary_tree_t));
	if (node_n == NULL)
		return (NULL);

	node_n->parent = parent;
	node_n->n = value;
	node_n->left = NULL;
	node_n->right = NULL;

	return (node_n);
}
