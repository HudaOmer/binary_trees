#include "binary_trees.h"

/**
 * height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: height of the tree
 */
size_t height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + height(tree->left) : 1;
		r = tree->right ? 1 + height(tree->right) : 1;
		return ((l > r) ? l : r);
	}
	return (0);
}

/**
 * bal_avl - a function to check if each subtree if its AVL
 * @tree: is a node that point to the tree to check
 * @high: is a node that point to the higher node
 * @lower: is a node that point to the lower node
 * Return: if tree is AVL 1, 0 if not
 */
int bal_AVL(const binary_tree_t *tree, int lower, int high)
{
	size_t height_l, height_r, balancer;

	if (tree != NULL)
	{
		if (tree->n > high || tree->n < lower)
			return (0);
		height_l = height(tree->left);
		height_r = height(tree->right);
		balancer = height_l > height_r ? height_l - height_r : height_r - height_l;
		if (balancer > 1)
			return (0);
		return (bal_AVL(tree->left, lower, tree->n - 1) &&
			bal_AVL(tree->right, tree->n + 1, high));
	}
	return (1);
}

/**
 * binary_tree_is_avl - it checks if a binary tree is a valid AVL tree
 * @tree: is a pointer to the root node of the tree to check
 * Return: 1 if tree is a valid AVL Tree, and 0 otherwise
 * If tree is NULL, return 0
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (bal_AVL(tree, INT_MIN, INT_MAX));
}
