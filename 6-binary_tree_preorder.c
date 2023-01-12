#include "binary_trees.h"
/**
 * binary_tree_preorder - Traverses the tree in preorder
 * calling a function along the way.
 * @tree: The root of the tree to traverse.
 * @func: The function to apply to the node.
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	if (tree->left)
		binary_tree_preorder(tree->left, func);
	if (tree->right)
		binary_tree_preorder(tree->right, func);
}

