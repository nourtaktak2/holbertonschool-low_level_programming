#include "holberton.h"
/*
 * *string_toupper - changes all lowercase letters to uppercase.
 * @c : variable.
 * Return: char.
 */
char *string_toupper(char *c)
{
int i;
int j = 0;
for (i = 0 ; c[i] != 0 ; i++)
j++;
for (i = 0 ; i < j ; i++)
{
if (c[i] >= 'a' && c[i] <= 'z')
c[i] = c[i] - 32;
}
return (c);
}
