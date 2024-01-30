// function that deletes an entire binary tree
// where tree is a pointer to the root node of the tree to delete
// if tree is null do nothing

#include "binary_trees.h"

void binary_tree_delete(binary_tree_t *tree)
{
    if (tree)
    {
        if (!tree)
            return;
        binary_tree_delete(tree->left);
        binary_tree_delete(tree->right);

        free(tree);
    }
}