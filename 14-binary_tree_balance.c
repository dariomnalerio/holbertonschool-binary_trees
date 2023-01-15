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
	if (tree->parent == NULL)
		return (binary_tree_balance(tree->right) + binary_tree_balance(tree->left));
	if (tree->left && tree->right)
	{
		if (binary_tree_balance(tree->right) > binary_tree_balance(tree->left))
			return (binary_tree_balance(tree->right) - 1);
		else
			return (binary_tree_balance(tree->left) + 1);
	}
	else if (tree->left)
		return (binary_tree_balance(tree->left) + 1);
	else if (tree->right)
		return (binary_tree_balance(tree->right) - 1);
	else
		return (0);
}
