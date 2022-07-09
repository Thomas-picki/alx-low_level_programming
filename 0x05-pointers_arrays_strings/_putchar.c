#include <unistd.h>
/** 
* _putchar - write the characters
* @c: the character to print
*
* Retrun: on success q
* on error -1 is reurned
*/

int _putchar(char c)
{
return (write(1,&c, 1));
}
