#include "binary_trees.h"

/**
 * array_to_heap - a function that builds a Max Binary Heap tree from an array
 * @array: is a pointer to the first element of the array to be converted
 * @size: is the number of element in the array
 *
 * Return: a pointer to the root node of the created Binary Heap
 *         NULL on failure
 */
heap_t *array_to_heap(int *array, size_t size)
{
	size_t count;
	heap_t *root = NULL;

	for (count = 0; count < size; count++)
		heap_insert(&root, array[count]);

	return (root);
}
