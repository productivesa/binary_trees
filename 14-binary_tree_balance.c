#include "binary_trees.h"

/**
 * binary_tree_height - calls recursive_height to return the height
 * @tree: tree root
 * Return: height
 */
size_t binarytree_height(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (tree == NULL)
		return (0);

	l = recursive_height(tree->left);
	r = recursive_height(tree->right);

	if (l > r)
		return (l + 1);

	return (r + 1);
}

/**
 * binary_tree_height - calls recursive_height to return the height
 * of a binary tree
 * @tree: tree root
 * Return: height of the tree or 0 if tree is NULL;
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);

	return (binarytree_height(tree) - 1);
}
