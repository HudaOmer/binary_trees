#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth
 * @tree: Pointer to the node to measure the depth.
 *
 * Return: Depth of the node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree || !tree->parent)
		return (0);

	return (1 + binary_tree_depth(tree->parent));
}
