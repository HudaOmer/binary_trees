#include "binary_trees.h"
#include "102-binary_tree_is_complete.c"

/**
 * check_max - it goes through a BT cheking ropt as max value
 * @tree: pointer to the root of tree
 * Return: 1 if all nodes are max, and 0 in other cases
 */
int check_max(const binary_tree_t *tree)
{
	int tmp1 = 1, tmp2 = 1;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (tree->left)
	{
		if (tree->n <= tree->left->n)
			return (0);
		tmp1 = check_max(tree->left);
	}
	if (tree->right)
	{
		if (tree->n <= tree->right->n)
			return (0);
		tmp2 = check_max(tree->right);
	}
	return (tmp1 && tmp2);
}

/**
 * binary_tree_is_heap - a function that checks if a binary tree is
 * a valid Max Binary Heap
 * @tree: is a pointer to the root node of the tree to check
 * Return: 1 if tree is a valid Max Binary Heap, and 0 otherwise
 * If tree is NULL, return 0
 **/
int binary_tree_is_heap(const binary_tree_t *tree)
{
	int tmp;

	if (!tree)
		return (0);

	tmp = binary_tree_is_complete(tree);
	if (!tmp)
		return (0);
	return (check_max(tree));
}
