#include "main.h"

void print_array_elements(char *str);
/**
 * main - print all argument
 * @argc: length of @argv integer
 * @argv: array of strings
 * Return: 0, success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		print_array_elements(argv[i]);
		_putchar('\n');
	}
	return (0);
}
/**
 * print_array_elements - prints all char of string
 * @str: pointer of string
 * Return: void
 */
void print_array_elements(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
