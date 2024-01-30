#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes in a
 * binary tree with at least one child.
 * @tree: Pointer to the root of the tree.
 *
 * Return: Number of nodes with at least one child, 0 if @tree is NULL.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree)
	{
		if (tree->left || tree->right)
			return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	}
	return (0);
}
