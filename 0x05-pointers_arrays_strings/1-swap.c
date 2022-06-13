#include "main.h"
/**
* swap_int - swap the values
* @a: 1st integer to be swapped
* @b: 2nd integer to swapped
*
* Return: void
*/

void swap_int(int *a, int *b)
{
int f;

f = *a;
*a = *b;
*b = f;
}
