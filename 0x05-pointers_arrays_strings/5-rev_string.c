#include  "main.h"
/**
 * rev_string - print a string in reverse
 * @s: string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0, j, stri;

	while (s[i])
		i++;

	j = i / 2;
	stri = 0;
	while (stri != j)
	{
		char temp = s[stri];
		int left = i - stri - 1;

		s[stri] = s[left];
		s[left] = temp;

		stri++;
	}
}

