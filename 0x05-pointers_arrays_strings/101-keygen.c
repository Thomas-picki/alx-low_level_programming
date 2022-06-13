#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generate random password
 * Return: always 0
 */
int main(void)
{
	char k[200];
	int x = 0;
	int rands = 0;
	char *key = k;

	srand(time(NULL));

	while (x < 2645)
	{
		rands = rand() % 122;
		if (rands > 32)
		{
			*key = rands;
			key = key + 1;
			x += rands;
		}
	}
	*key = (2772 - x);
	*(key + 1) = '\n';
	printf("%s", k);
	return (0);
}

