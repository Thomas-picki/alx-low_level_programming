#include <stdlib.h>
/**
 * _strdup - copy string
 * @str: the string to be copy
 * Return: pointer
 * Or NULL
 */
char *_strdup(char *str)
{
	char *alloc_mem;
	unsigned int i;
	unsigned int length_string = 0;

	if (str == NULL)
		return ('\0');
	while (*(str + length_string) != '\0')
		length_string++;
	length_string++;
	alloc_mem = malloc(sizeof(*str) * length_string);
	if (alloc_mem == NULL)
		return ('\0');
	for (i = 0; i < length_string; i++)
		alloc_mem[i] = *(str + i);
	alloc_mem[i] = '\0';
	return (alloc_mem);
}

