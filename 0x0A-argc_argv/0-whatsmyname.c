#include "main.h"
#include <stdio.h>

void print_string(char *str);
/**
 * main - print names 
 * @argc: lenght of argv
 * @argv: arrays of string
 * Return: 0, sucess
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	print_string(argv[0]);
	putchar('\n');

	return (0);
}
/**
 * print_string - print all char
 * @str: pointer to string
 * Return: void
 */
void print_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
}
