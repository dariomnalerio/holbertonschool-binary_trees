#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: height of the binary tree, 0 if tree is NULL
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (recursion(0, tree));
}

/**
 * recursion - measures the height of a binary tree
 * @depth: Depth of the node
 * @tree: pointer to the node of the tree
 * Return: height of the node
*/

size_t recursion(size_t depth, const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0, height = 0;

	if (tree->left)
		left_height = recursion(depth + 1, tree->left);
	if (tree->right)
		right_height = recursion(depth + 1, tree->right);

	if (left_height > right_height)
		height = left_height;
	else
		height = right_height;

	if (depth > 0)
		height++;

	return (height);
}
