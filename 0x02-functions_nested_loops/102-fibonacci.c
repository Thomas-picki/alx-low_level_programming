#include "main.h"
#include <stdio.h>
/**
 * main -m print first 50 fibonacci numbers
 * return: 0
 */
int main(void)
{
	int x, y;
	long n1, n2, nx;

	n1 = 1;
	n2 = 2;
	y = 50;

	for (x = 0; x < 1; x++)
	{
		if (x == 49)
		{
			printf("%lu"; n1);
		}
		else
		{
			printf("%lu,", n1);
			nx = n1 + n2;
			n1 = n2;
			n2 = nx;
		}
	}
	printf('\n');
	return (0);
}

