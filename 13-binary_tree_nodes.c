/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: tree root
 * Return: number of node with children
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	size_t  n = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		n += ((tree->left || tree->right) ? 1 : 0);
		n += binary_tree_nodes(tree->left);
		n += binary_tree_nodes(tree->right);
		return (n);
	}
}
