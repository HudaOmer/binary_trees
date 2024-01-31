// function that measures the balace factor of a binary tree
// tree is a pointer to the root node of the tree to measure the balance factor
// If tree is NULL, return 0

#include "binary_trees.h"

int binary_tree_balance(const binary_tree_t *tree)
{
    int right_height = 0;
    int left_height = 0;
    
    if (tree)
    {
        left_height = height(tree->left);
        right_height = height(tree->right);
    }
    else
    {
        return (0);
    }
    return (left_height - right_height);
}

int height(const binary_tree_t * tree)
{
    if (tree)
    {
        int left_height = 1 + height(tree->left);
        int right_height = 1 + height(tree->right);

        return (left_height > right_height ? left_height : right_height);
    }
    return (0);
}
