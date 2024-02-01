#include "binary_trees.h"

/**
 * validBST - check if a binary tree is a valid BST
 * @tree:is a pointer to the root of the tree
 * @low: value of the smallest node visited
 * @high: value of the largest node visited
 *
 * Return: true if the tree is a valid BST, false otherwise
 */
bool validBST(const binary_tree_t *tree, int low, int high)
{
	if (tree )
	{
		if (tree->n < low || tree->n > high)
			return (false);
		return (validBST(tree->left, low, tree->n - 1) &&
			validBST(tree->right, tree->n + 1, high));
	}
	return (true);
}

/**
 * binary_tree_is_bst - check if a tree is a BST
 * @tree: a pointer to the root of the tree
 * Return: 1 if tree is a valid BST, and 0 otherwise
 * 	If tree is NULL, return 0 
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (validBST(tree, INT_MIN, INT_MAX))
		return (1);
	return (0);
}
