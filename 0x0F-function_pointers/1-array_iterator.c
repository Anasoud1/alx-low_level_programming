#include "function_pointers.h"

/**
 * array_iterator - function that execute a function given as parametre on
 *		each element of an array
 * @array: array
 * @size: size of array
 * @action: fucntion pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action || size)
		for (i = 0; i < size; i++)
			action(array[i]);
}
