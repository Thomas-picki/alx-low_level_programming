#include "main.h"
/**
 * _strlen - return the lenght
 * @s: the character string
 * return: the lenght
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

