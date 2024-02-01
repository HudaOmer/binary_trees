#include "binary_trees.h"

/**
 * isFullTree - this function checks if a tree is full
 * @root: is a pointer root of the tree
 * Return: true if full, false in not
bool isFullTree (struct Node* root)
{
	/* If empty tree */
	if (!root)
    return true;

	/* If leaf node */
  if (!(root->left) && !(root->right))
    return true;

	/* If both left and right are not NULL, and left & right subtrees */
	/* are full */
  if ((root->left) && (root->right))
    return (isFullTree(root->left) && isFullTree(root->right));

	/* We reach here when none of the above if conditions work */
  return false;
}

/**
 * binary_tree_is_complete - 

int binary_tree_is_complete(const binary_tree_t *tree)
{
  if (isFullTree(root))
    return (1);
  return (0);
}
