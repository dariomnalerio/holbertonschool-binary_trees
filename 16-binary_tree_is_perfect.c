#include "binary_trees.h"

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->right && tree->left)
		return (binary_tree_is_perfect(tree->right) && binary_tree_is_perfect(tree->left));
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
