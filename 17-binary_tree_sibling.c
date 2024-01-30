#include "binary_trees.h"

/**
 * binary_tree_sibling - a function that finds the sibling of a node
 * @node: is a pointer to the node to find the sibling
 *
 * Return: a pointer to the sibling node
 * If node is NULL or the parent is NULL, return NULL
 * If node has no sibling, return NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	printf("hi\n");
	if (!node || !(node->parent))
		return (NULL);
	printf("hi\n");
	if (node->parent->left->n == node->n)
	{
		printf("right");
		return (node->parent->right);
	}
	if (node->parent->right->n == node->n)
		return (node->parent->left);
	return (NULL);
}
