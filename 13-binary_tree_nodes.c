/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: tree root
 * Return: number of node with children
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	size_t  node = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		node += ((tree->left || tree->right));
			node = 1
		node += binary_tree_nodes(tree->left);
		node += binary_tree_nodes(tree->right);
		return (node);
	}
}
