#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the size
 * Return: if tree is NULL, the function must return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
	{
		left += binary_tree_size(tree->left);
	}
	if (tree->right)
	{
		right += binary_tree_size(tree->right);
	}
	return (left + right + 1);
}
