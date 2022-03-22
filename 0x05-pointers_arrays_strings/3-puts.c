#include "main.h"
/**
* _puts - prints a string
* @str: pointerto an int
*
* Return: void which means our answer is correct
*/

void _puts(char *str)
{
char *c;
int n;
c = str;
for (n = 0; c[n]; n++)
{
_putchar (c[n]);
}
_putchar('\n');
}
