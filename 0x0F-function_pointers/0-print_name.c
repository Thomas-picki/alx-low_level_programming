#include "function_pointers.h"
/**
 * print_name - tprint function name
 * @name: string
 * @f: function pointer
 * Return: void function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
