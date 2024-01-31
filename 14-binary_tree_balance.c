#include "binary_trees.h"

/**
 * binary_tree_balance - a function that measures the
 * balance factor of a binary tree
 * @tree: is a pointer to the root node of the tree to
 * measure the balance factor
 *
 * Return: balance factor If tree is NULL, return 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left_height = 1 + binary_tree_balance(tree->left);

	if (tree->right)
		right_height = 1 + binary_tree_balance(tree->right);

	return (left_height - right_height);
}
