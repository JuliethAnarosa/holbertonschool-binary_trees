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

	if (!node || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	uncle = node->parent;


	if (uncle->parent->left == uncle)
		return (uncle->parent->right);
	else
		return (uncle->parent->left);
}
