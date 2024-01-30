// function that insert a node as the ight-child of another node
// parent is a pointer to the node to insert the right-child
// value is the value to store in the new node
// function must return a pointer to the created node, or NULL on failure or if parent is NULL
// If parent already has a right-child, the new node must take its place, and the old right-child must be set as the right-child of the new node

#include "binary_trees.h"

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    if (!parent)
        return (NULL);

    new_node->n = value;
    new_node->parent = parent;
    new_node->left = NULL;
    new_node->right = NULL;

    if (parent->right)
    {
        new_node->right = parent->right;
        parent->right->parent = new_node;
    }

    parent->right = new_node;

    return (new_node);
}