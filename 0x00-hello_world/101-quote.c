#include <stdio.h>
#include <unistd.h>

/**
 * main - prints exactly and that piece of art is useful
 *
 * Return: Always 1 if success
 */
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
