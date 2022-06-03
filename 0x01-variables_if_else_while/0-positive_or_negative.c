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

					/* your code goes there */
				if(n>0)
					printf("Positive");
				else if(n==0)
					printf("Zero");
				else if(n<0)
					printf("Negative");
				else
					printf("End of program");

					return (0);

}
