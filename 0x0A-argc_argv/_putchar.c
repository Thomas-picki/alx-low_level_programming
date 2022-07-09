#include <unistd.h>
/**
 * _putchar - write the character c
 * @c: the character print
 * Return: 1 success
 * on error,-1 is returns
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

