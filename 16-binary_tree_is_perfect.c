#include "binary_trees.h"
/**
  * depth - measures the depth of a node in a binary tree
  * @tree: pointer to the root node of the tree to traverse
  * Return: return int value
  */
int depth(const binary_tree_t *tree)
{
	int d = 0;

	while (tree != NULL)
	{
		d++;
		tree = tree->left;
	}
	return (d);
}

/**
  * is_perfect -  of a node in a binary tree
  * @tree: pointer to the root node of the tree to traverse
  * @d: variable of depth
  * @level: variable of nelvel
  * Return: return int value
  */
int  is_perfect(const binary_tree_t *tree, int d, int level)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (d == level + 1);
	if (tree->left == NULL || tree->right == NULL)
		return (-1);
	return (is_perfect(tree->left, d, level + 1) && is_perfect(tree->right, d, level +1));
}

/**
  * binary_tree_is_perfect - measures the depth of a 
  * @tree: pointer to the root node of the tree to traverse
  * Return: return int value
  */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d = depth(tree);
	return is_perfect(tree, d, 0);
}
