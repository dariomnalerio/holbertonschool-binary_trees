#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the number of non-leaf nodes in a tree.
 * @tree: The tree to count.
 * Return: Number of nodes with at least one child.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left && tree->right)
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
	if (tree->left)
		return (binary_tree_nodes(tree->left) + 1);
	if (tree->right)
		return (binary_tree_nodes(tree->right) + 1);
	return (0);
}
