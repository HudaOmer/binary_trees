#include "binary_trees.h"

/**
 * binary_trees_ancestor - a function that finds the lowest common
 * ancestor of two nodes
 * @first: is a pointer to the first node
 * @second: is a pointer to the second node
 *
 * Return: commom ancestor, if no common ancestors return NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *firstp, *secondp;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	firstp = first->parent, secondp = second->parent;
	if (first == secondp || !firstp || (!(firstp>parent) && secondp))
		return (binary_trees_ancestor(first, secondp));
	else if (firstp == second || !secondp || (!(secondp>parent) && firstp))
		return (binary_trees_ancestor(firstp, second));

	return (binary_trees_ancestor(firstp, secondp));
}
