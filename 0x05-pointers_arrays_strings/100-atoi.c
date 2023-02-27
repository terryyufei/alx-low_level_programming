#include "main.h"
#include <stdio.h>
/**
* _atoi - convert a string to an integer
* @s: char
* Return: int converted from string
*/

int _atoi(char *s)
{
int a, d, o, len, r, digit;

a = 0;
d = 0;
o = 0;
len = 0;
r = 0;
digit = 0;

while (s[len] != '\0')
len++;

while (a < len && r == 0)
{
if (s[a] == '-')
++d;

if (s[a] >= '0' && s[a] <= '9')
{
digit = s[a] - '0';
if (d % 2)
digit = -digit;
o = o * 10 + digit;
r = 1;
if (s[a + 1] < '0' || s[a + 1] > '9')
break;
r = 0;
}
a++;
}

if (r == 0)
return (0);

return (o);

}
