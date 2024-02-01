#include "binary_trees.h"

/**
 * bst_insert - a function that inserts a value into a BST
 * @tree: is a pointer to the binary search tree to modify
 * @value: is the value to insert into the tree
 *
 * Return: pointer to the created node, NULL otherwise
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *new_node = NULL, *parent = NULL;

	if (tree)
	{
		parent = *tree;
		if (*tree == NULL)
		{
			new_node = binary_tree_node(*tree, value);
			*tree = new_node;
		}
		else
		{
			while (parent)
			{
				if ((parent->n > value) && (parent->left))
					parent = parent->left;
				else if ((parent->n < value) && (parent->right))
					parent = parent->right;
				else
					break;
			}
			if (parent->n < value)
			{
				new_node = binary_tree_node(parent, value);
				parent->right = new_node;
			}
			else if (parent->n > value)
			{
				new_node = binary_tree_node(parent, value);
				parent->left = new_node;
			}
		}
	}


	return (new_node);
}
