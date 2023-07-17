#include "function_pointers.h"

/**
 * array_iterator - execute function on a array via function ptr
 * @array: array
 * @size: size of array
 * @action: pointer to function needed for execute
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != NULL && action != NULL)
		while (i < size)
		{
			action(*(array + i));
			i++;
		}
}
