#include "binary_trees.h"

/**
 * binary_tree_size - A function that returns the size of binary tree.
 * @tree: A pointer to the root of the tree.
 * Return: The size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left && tree->right)
		return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
	if (tree->left)
		return (binary_tree_size(tree->left) + 1);
	if (tree->right)
		return (binary_tree_size(tree->right) + 1);
	return (1);
}
