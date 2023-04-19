#include "function_pointers.h"

/**
 * array_iterator - Array_iterator
 * @array: array
 * @size: size
 * @action: action
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

	for (size_t i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
