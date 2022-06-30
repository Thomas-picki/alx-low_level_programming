#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * malloc_checked - allocate memory using malloc
 * @b: size of memory
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *st;
	
	st = malloc(b);
	if (st == NULL)
	{
		exit(98);
	}
	return (st);
}
