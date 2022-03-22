#include <unistd.h>
/** 
* _putchar - write the characters
* @c: the character to print
*
* Retrun: on success q
[A[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[
* on error -1 is reurned

int _putchar(char c)
{
return (write(1,&c, 1));
}
