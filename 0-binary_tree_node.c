#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new node as child of a given node.
 * @parent: The parent of the created node.
 * @value: The contents of the created node.
 * Return: A pointer to the created node or NULL if parent has two children.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = value;
	newNode->right = NULL;
	newNode->left = NULL;
	newNode->parent = parent;
	return (newNode);
}
