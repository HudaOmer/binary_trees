#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root.
 * Description: A root is a node with node parent.
 * @node: Pointer to the node to check.
 * Return: 1 if the node is a root, 0 otherwise.
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && !node->parent)
		return (1);

	return (0);
}