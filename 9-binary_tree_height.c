#include "binary_trees.h"

/**
 * recursive_height - measures the height of a binary tree
 * @tree: tree root
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t binary_left = 0;
	size_t binary_right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			binary_left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
			binary_right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		}
		return ((binary_left > binary_right) ? binary_left : binary_right);
	}
}
