#include "binary_trees.h"

/**
 * bst_insert - a function that inserts a value into a BST
 * @tree: is a pointer to the binary search tree to modify
 * @value: is the value to insert  into the tree
 *
 * Return: pointer to the  created node, NULL otherwise
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *curr, *new;

	if (tree)
	{
		curr = *tree;

		if (!curr)
		{
			new = binary_tree_node(curr, value);
			if (new == NULL)
				return (NULL);
			return (*tree = new);
		}

		if (value < curr->n)
		{
			if (curr->left)
				return (bst_insert(&curr->left, value));

			new = binary_tree_node(curr, value);
			if (new == NULL)
				return (NULL);
			return (curr->left = new);
		}

		if (value > curr->n)
		{
			if (curr->right)
				return (bst_insert(&curr->right, value));

			new = binary_tree_node(curr, value);
			if (!new)
				return (NULL);
			return (curr->right = new);
		}
	}
	return (NULL);
}
