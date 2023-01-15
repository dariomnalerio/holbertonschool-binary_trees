#include "binary_trees.h"

/**
 * binary_tree_balance - Calculates the balance factor of a binary tree.
 * @tree: The tree to calculate the balance factor of.
 * Return: Balance factor of the tree.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (height_tree(tree->left) - height_tree(tree->right));
}

/**
 * height_tree - Calculates the height of a tree.
 * @tree: The tree.
 * Return: The height of the tree.
 */

int height_tree(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left && tree->right)
	{
		if (height_tree(tree->right) > height_tree(tree->left))
			return (height_tree(tree->right) + 1);
		else
			return (height_tree(tree->left) + 1);
	}
	else if (tree->left)
		return (height_tree(tree->left) + 1);
	else if (tree->right)
		return (height_tree(tree->right) + 1);
	else
		return (1);
}
