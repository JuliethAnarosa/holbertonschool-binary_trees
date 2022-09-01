#include "binary_trees.h"
/**
  * binary_tree_height - goes through a binary tree using post-order
  * @tree: pointer to the root node of the tree to traverse
  * Return: return int value
  */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);

	else
	{
		int left_height = binary_tree_height(tree->left);
		int right_height = binary_tree_height(tree->right);

		if (left_height >= right_height)
			return (left_height + 1);
		else
			return (right_height + 1);
	}
}
