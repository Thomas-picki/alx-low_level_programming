#include <stdio.h>
/**
 * first - ...
 * return: nothing
 */
void __attribute__((constructor)) beforeMain()
{
	printf("you're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
