#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: node parent
 * @value: node value
 * Return: pointer to the new node or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node_n;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (node_n == NULL)
		return (NULL);

	node_n->parent = parent;
	node_n->n = value;
	node_n->left = NULL;
	node_n->right = parent->right;

	if (parent->right != NULL)
		parent->right->parent = node_n;

	parent->right = node_n;

	return (node_n);
}
