#include <stdio.h>
#include <math.h>
/**
 * main - print the largest prtime number
 * Return: always 0
 */
int main(void)
{
	long a, fa;
	long number = 612852475143;
	double square = sqrt(number);

	for (a = 1; a <= square; a++)
	{
		if (number % a == 0)
		{
			fa = number / a;
		}
	}
	printf("%ld\n", fa);

	return (0);
}
