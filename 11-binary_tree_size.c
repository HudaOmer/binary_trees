#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size
 * @tree: Pointer
 *
 * Return: Size of the binary
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t total = 0;

	if (!tree)
		return (0);
	total += binary_tree_size(tree->left);
	total += binary_tree_size(tree->right);
	total++;

	return (total);
}
