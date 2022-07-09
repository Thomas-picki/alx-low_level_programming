#include "function_pointers.h"
/**
 * int_index - search for integer
 * @array: array of integer
 * @size: number of element on array
 * @cmp: pointer to function
 * return: integer index integer
 * -1 if size <= 0 or integer 
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
