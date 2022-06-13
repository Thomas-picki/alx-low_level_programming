#include <stdio.h>
#include "main.h"
/**
 * print_array - print element of array
 * @a: the array
 * @n: the number of element in the array
 * return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i + 1 != n)
			printf(", ");
	}
	printf("\n");
}

