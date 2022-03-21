#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b);
int main(void)
{
    int a = 98;
    int b = 42;

    printf("a = %d\n", a);
    printf("b = %d\n\n", b);

    swap(&a, &b);    //passing address of m and n to the swap function
    printf("After Swapping:\n\n");
    printf("a = %d\n", a);
    printf("b = %d", b);
    return 0;
}

/*
    pointer 'a' and 'b' holds and 
    points to the address of 'm' and 'n'
*/
void swap_int(int *a, int *b) 
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
