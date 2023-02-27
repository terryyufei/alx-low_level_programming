#include "main.h"
#include <stdio.h>

/**
* _strcpy - Copies strings to pointers
* including terminating null byte
* @dest: output
* @src: output
* Return: (p)
*/

char *_strcpy(char *dest, char *src)
{
char *p = dest;

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (p);
}
