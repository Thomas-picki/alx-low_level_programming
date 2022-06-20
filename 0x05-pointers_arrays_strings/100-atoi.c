#include "main.h"
/**
 * _atoi - convert a numebr string to integer
 * @s: string to comverted
 * Return: convert integer  or 0
 */
int _atoi(char *s)
{
	int cache = 1;
	int re = 0;

	while (s[0] != '\0')
	{
		if (s[0] == '-')
			cache *= -1;
		else if (s[0] >= '0' && s[0] <= '9')
			re = (re * 10) + (s[0] - '0') * cache;
		else if (re)
			break;
		s++;
	}
	return (re);
}
