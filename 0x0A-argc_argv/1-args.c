#include "main.h"

void print_number(int num);
/**
 * main - prints the number
 * @argc: length of @argv
 * @argv: array of string of the programs arguments
 * Return: 0, success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	print_number(--argc);
	_putchar('\n');
	return (0);
}
/**
 * print_number - prints number with _puthcar
 * @num: inter number to printed
 * Return: void
 */
void print_number(int num)
{
	if (num / 10)
		print_number(num / 10);
	_putchar(num % 10 + '0');
}
