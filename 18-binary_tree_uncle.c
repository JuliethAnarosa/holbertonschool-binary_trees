#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the sibling of a node
 * @node: is a pointer to the node to find the sibling
 *
 * Return: NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle = NULL;

	uncle = node->parent;

	if (!node || node->parent == NULL)
		return (NULL);
	if (uncle->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (uncle->parent->left);
	else
		return (uncle->parent->right);
}
