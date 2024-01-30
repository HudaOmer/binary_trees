// function that create binary treee node
// parent is a pointer to the parent node of the node to create
// value is the value to put in the new node
// When created, a node does not have any child
// function must return a pointer to the new node, or NULL on failure

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
    if (!new_node)
    {
        free(new_node);
        return (NULL);
    }

    new_node->n = value;
    new_node->left = NULL;
    new_node->right = NULL;
    new_node->parent = parent;

    if (parent)
    {
        if (!parent->left)
            parent->left = new_node;
        else if (!parent->right)
            parent->right = new_node;
        else
            return (NULL);
    }
    
    return (new_node);
}