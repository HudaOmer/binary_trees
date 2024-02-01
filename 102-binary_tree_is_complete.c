#include "binary_trees.h"
#include <stdbool.h>

/**
 *
 */
size_t countNodes(binary_tree_t *root)
{
    if (!root)
        return (0);

    return (1 + countNodes(root->left) + countNodes(root->right));
}

/**
 * isComplete - this function checks if a tree is full
 * @root: is a pointer root of the tree
 * Return: true if complete, false if not
 */
bool isComplete(binary_tree_t *root, size_t index,size_t nodes)
{
    if (!root)
        return (true);
 
    if (index >= nodes)
        return (false);
 
    return (isComplete(root->left, 2*index + 1, nodes) &&
            isComplete(root->right, 2*index + 2, nodes));
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
	size_t index = 0, nodes = countNodes(root);

	if (!root)
		return (0);
	if (isComplete(root, index, nodes))
		return (1);
	return (0);
}
