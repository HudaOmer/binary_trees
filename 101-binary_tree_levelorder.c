#include "binary_trees.h"

/**
 * height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: Height of the tree.
 */
int height(const binary_tree_t *tree)
{
	if (tree)
	{
		int left_height = 1 + height(tree->left);
		int right_height = 1 + height(tree->right);

		return (left_height > right_height ? left_height : right_height);
	}
	return (0);
}

/**
 *print_current_level - prints current level's nodes
 *@func: pointer to a function to call for each node
 *@level: the current level
 *@node: pointer to the node
 *Return: nothing
 */
void print_current_level(binary_tree_t *node, void (*func)(int), int level)
{
	if (node && func)
	{
		if (level == 1)
			func(node->n);
		if (level > 1)
		{
			print_current_level(node->left, func, level - 1);
			print_current_level(node->right, func, level - 1);
		}
	}
}

/**
 * binary_tree_levelorder - a function that goes through a
 * binary tree using level-order traversal
 * @tree: is a pointer to the root node of the tree to traverse
 * @func: is a pointer to a function to call for each node
 * Return: void and if tree or func is NULL, do nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t h, i = 0;
	binary_tree_t *node = (binary_tree_t *)tree;

	if (!tree || !func)
		return;
	else
	{
		h = height(tree);
		for (i = 1; i <= h; i++)
			print_current_level(node, func, h);
	}
}
