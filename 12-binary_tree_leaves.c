#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the binary tree
 * Return: number of leaves
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0, left = 0, right = 0;

	if (!tree)
		return (0);
	if (tree->left)
	{
		binary_tree_leaves(tree->left);
		left++;
	}
	if (tree->right)
	{
		binary_tree_leaves(tree->right);
		right++;
	}

	count = left + right;
	if (!tree->left && !tree->right)
		count++;

	return (count);
}


