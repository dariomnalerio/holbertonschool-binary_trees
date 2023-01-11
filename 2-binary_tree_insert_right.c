#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as right
 * child of another one, if exists, in between.
 * @parent: The parent of the created node.
 * @value: The contents of the created node.
 * Return: A pointer to the created node or NULL if parent is NULL.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = NULL;

	if (!parent)
		return (NULL);
	newNode = binary_tree_node(parent, value);
	if (parent->right)
	{
		newNode->right = parent->right;
		parent->right = newNode;
		newNode->right->parent = newNode;
	}
	else
	{
		parent->right = newNode;
	}
	return (newNode);
}
