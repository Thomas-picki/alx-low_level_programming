#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - varibale if else while
 *
 * Return: Always 0
 */

int main(void)

{

		int n;


		srand(time(0));

		n = rand() - RAND_MAX / 2;

		if (n>0)
			printf("%d is Positive\n", n);
		else if (n==0)
			printf("%d is Zero\n", n);
		else (n<0)
			printf("%d is Negative\n", n);
			
		return (0);

}
