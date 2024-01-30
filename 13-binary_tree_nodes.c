// function that count the nodes with at least 1 child in a binary tree
// where tree is a pointer to the root node of the tree to count the number of nodes
// if tree is null the function must return 0
// a null pointer is not a node

#include "binary_trees.h"

size_t binary_tree_nodes(const binary_tree_t *tree)
{
    size_t nodes = 0;

    if (tree)
    {
        if (tree->left || tree->right)
            nodes++;
        nodes += binary_tree_nodes(tree->left);
        nodes += binary_tree_nodes(tree->right);
    }
    return (nodes);
}
