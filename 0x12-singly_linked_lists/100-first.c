#include <stdio.h>
/**
 * beformain: runs before the main function
 */
void __attribute__((constructor)) beforeMain()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
