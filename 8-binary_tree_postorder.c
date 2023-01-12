#include "binary_trees.h"
/**
 * binary_tree_postorder - Traverses the tree in postorder
 * calling a function along the way.
 * @tree: The root of the tree to traverse.
 * @func: The function to apply to the node.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	if (tree->left)
		binary_tree_postorder(tree->left, func);
	if (tree->right)
		binary_tree_postorder(tree->right, func);
	func(tree->n);
}

