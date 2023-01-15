#include "binary_trees.h"

/**
 * binary_tree_is_perfect - A function that checks if a binary tree is perfect.
 * @tree: The tree to check,
 * Return: 1 if perfect, 0 if not.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->parent && !tree->right && !tree->left)
		return (1);
	if (tree->right && tree->left)
		return (binary_tree_is_perfect(tree->right)
&& binary_tree_is_perfect(tree->left));
	else if (!tree->right && !tree->left)
	{
		if (tree->parent->right && tree->parent->left && tree->parent->left == tree)
		{
			if (!tree->parent->right->left && !tree->parent->right->right)
				return (1);
		}
		if (tree->parent->left && tree->parent->right && tree->parent->right == tree)
		{
			if (!tree->parent->left->right && !tree->parent->left->left)
				return (1);
		}
		return (0);
	}
	else
		return (0);
}
