#include "binary_trees.h"

/**
 * binary_trees_ancestor - function that checks an ancestor
 * @first: pointer First node
 * @second: pointerSecond node
 * Return: the node of the ancestor
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	binary_tree_t *n1, *n2;

	if (first == NULL || second == NULL)
	{
		return (NULL);
	}
	if (first == second)
	{
		return ((binary_tree_t *)first);
	}

	n1 = first->parent;
	n2 = second->parent;
	if (n1 == NULL || first == n2 || (!n1->parent && n2))
	{
		return (binary_trees_ancestor(first, n2));
	}
	else if (n2 == NULL || n1 == second || (!n2->parent && n1))
	{
		return (binary_trees_ancestor(n1, second));
	}
	return (binary_trees_ancestor(n1, n2));
}
