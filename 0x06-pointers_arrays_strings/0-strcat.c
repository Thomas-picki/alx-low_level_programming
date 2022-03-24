


#include "main.h"
/**
* _strcat - concatnet two strings
* @dest: a pointer charachter tha will be changed
* @src: a pointer to a character that will be chaned
* Return: dest
*/
[3~[[B[B[B[B[A[A[A[A[A[A[[B[B[B[B[B[B[B[C[C

char *_strcat(char *dest, char *src)
{
int i,j;
i=0;
while (dest[i] != '\0')
{
i++;
}
j=0;
while (src[j] !='\0')
{
dest[i] = src[j];
j++;
i++;
}
dest[i]='\0';
return (dest);
}
