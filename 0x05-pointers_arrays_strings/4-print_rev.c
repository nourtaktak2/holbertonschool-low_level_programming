#include "holberton.h"

/**
* print_rev - prints a string, in reverse, followed by a new line.
* @s : string
* Return: void.
*/

void print_rev(char *s)
{
int i;
int x = 0;
for (i = 0 ; s[i] != 0 ; i++)
{
x++;
}
for (i = x - 1 ; s[i] > 0 ; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
