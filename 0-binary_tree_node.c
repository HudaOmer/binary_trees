#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new node for a binary tree.
 * @parent: Pointer to the parent node.
 * @value: Integer value to be stored in the new node.
 *
 * Return: Pointer to the newly created node on success, or NULL on failure.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
