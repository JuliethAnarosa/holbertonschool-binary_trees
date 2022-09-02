#include "binary_trees.h"
/**
 * binary_tree_balance  - counts the nodes with at least 1
 *
 * @tree: Pointer to the tree
 * Return: Return the height of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_height(tree->left) - binary_height(tree->right));
}

/**
 *max - funtion to compare
 *
 *@a: variable
 *@b: variable
 *Return: return the height number
 */
int max(int a, int b) { return (a >= b) ? a : b; }

/**
 *binary_height - funtion to verified the height
 *@tree: varibale estruct binary tree
 *Return: return recursive
 */

size_t binary_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + max(binary_height(tree->left), binary_height(tree->right)));
}
