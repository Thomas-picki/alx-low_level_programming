#include "main.h"
#include <stdio.h>
/**
 * main -m print first 50 fibonacci numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y;
	long int  n1, n2, nx;

	n1 = 1;
	n2 = 2;
	y = 50;

	for (x = 0; x < y; x++)
	{
		if (x == 49)
		{
			printf("%ld ", n1);
		}
		else
		{
			printf("%ld, ", n1);
			nx = n1 + n2;
			n1 = n2;
			n2 = nx;
		}
	}
	return (0);
}

