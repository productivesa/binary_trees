#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: node parent
 * @value: node value
 * Return: pointer to the new node or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node_n;

	if (parent == NULL)
		return (NULL);

	node_n = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	node_n->parent = parent;
	node_n->n = value;
	node_n->left = parent->left;
	node_n->right = NULL;

	if (parent->left != NULL)
		parent->left->parent = node_n;

	parent->left = node_n;

	return (node_n);
}
