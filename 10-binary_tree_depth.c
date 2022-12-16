#include "binary_trees.h"

/**
 * binary_tree_depth - calls recursive_depth to return the depth
 * of a node in a binary tree
 * @tree: tree checking depth
 * Return: depth of the tree or 0 if tree is NULL;
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
