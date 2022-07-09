#include <stdlib.h>
/**
 * str_concat - concatnet 2 string
 * @s1: first string
 * @s2: second string
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int s1_l = 0;
	unsigned int s2_l = 0;
	char *alloc_mem;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	while (*(s1 + s1_l) != '\0')
		s1_l++;
	while (*(s2 + s2_l) != '\0')
		s2_l++;
	alloc_mem = malloc(1 + (s1_l * sizeof(*s1)) + (s2_l * sizeof(*s2)));
	if (alloc_mem == NULL)
		return ('\0');
	for (i = 0; i < s1_l; i++)
		alloc_mem[i] = *(s1 + i);
	for (j = 0; i < s2_l; j++)
		alloc_mem[i] = *(s2 + j);
	return (alloc_mem);
}
