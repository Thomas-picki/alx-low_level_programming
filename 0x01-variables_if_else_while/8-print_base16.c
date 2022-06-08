#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	char c = 'a';
	int a;

	for (a = 0; a < 16; a++)
	{
		if (a < 10)
		{
			putchar(a + '0');
		}
		else
		{
			putchar(c);
			c++;
		}
	}
	putchar('\n');
	return (0);
}
