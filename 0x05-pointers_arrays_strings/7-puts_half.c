#include "holberton.h"
/**
 * puts_half - check the code for Holberton School students.
 * @str : variable.
 * Return: Void.
 */
void puts_half(char *str)
{
int i;
int j;
int n;
for (i = 0 ; str[i] != 0 ; i++)
{
j++;
}

if (j % 2 == 0)
n = j / 2;
else
n = j - ((j - 1) / 2);


for (i = n ; i < j ; i++)
_putchar(str[i]);

_putchar('\n');
}
