#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - Executes a function 
 * @array: array of parametr
 * @size: size of array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!action || !array)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
