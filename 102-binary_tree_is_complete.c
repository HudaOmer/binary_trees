#include "binary_trees.h"
#include <stdbool.h>
/**
 * isFullTree - this function checks if a tree is full
 * @root: is a pointer root of the tree
 * Return: true if full, false in not
 */
bool isFullTree(binary_tree_t *root)
{
	/* If empty tree */
	if (!root)
		return (true);

	/* If leaf node */
	if (!(root->left) && !(root->right))
		return (true);

	if ((root->left) && !(root->right))
	{
		if (isFullTree(root->left))
			return (true);
		else
			return (false);
	}
	/* If both left and right are not NULL, and left & right subtrees */
	/* are full */
	if ((root->left) && (root->right))
		return ((isFullTree(root->left) && isFullTree(root->right)));

	/* We reach here when none of the above if conditions work */
	return (false);
}

/**
 * binary_tree_is_complete - a function that checks if
 * a binary tree is complete
 * @tree: is a pointer to the root node of the tree to check
 * Return: 1 if complete, 0 otherwise
 *	if tree is NULL, your function must return 0
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	binary_tree_t *root = (binary_tree_t *)tree;

	if (!root)
		return (0);
	if (isFullTree(root))
		return (1);
	return (0);
}
