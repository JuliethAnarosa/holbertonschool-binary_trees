#include "binary_trees.h"
/**
  * binary_tree_height - goes through a binary tree using post-order
  * @tree: pointer to the root node of the tree to traverse
  * Return: return int value
  */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->parent)
		return 1 + binary_tree_depth(tree->parent);

	return (0);
}
