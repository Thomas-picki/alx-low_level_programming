#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - adds two numbers
 * @a: Anumber
 * @b: A Number
 * Return: sum of @a and @b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - calculate the subtruction
 * @a: A Number
 * @b: a Number
 * Return: deiffercnce of @aand @b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplication of two numbers
 * @a: a number
 * @b: number
 * return: product of @a and @b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division of two numbers
 * @a: number
 * @b: number
 * Return: division of @a and @b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - calculate the remainder
 * @a: number
 * @b: number
 * return: remainder of @a and @b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return ( a % b);
}
