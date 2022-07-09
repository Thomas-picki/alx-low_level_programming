#include <stdlib.h>
/**
 * array_range - creates ana array
 * @min: first min value
 * @max: last max value
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int i, n;
	int *ptr;

	if (min > max)
		return ('\0');
	n = (max - min) + 1;
	ptr = malloc(sizeof(int) * n);
	if (ptr == NULL)
		return ('\0');
	for (i = 0; i < n; i++)
		ptr[i] = min + 1;
	return (ptr);
}

