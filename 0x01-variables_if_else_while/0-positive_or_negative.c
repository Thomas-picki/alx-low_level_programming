#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints random no +v -V and zero
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is Positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is Negative\n", n);
	}
	else
	{
		printf("%d is Zero\n", n);
	}
	return (0);
}
