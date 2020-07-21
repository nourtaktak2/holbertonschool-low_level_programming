#include "holberton.h"
/**
 * *leet - encodes the string into 1337.
 * @c : string.
 * Return: string.
 */
char *leet(char *c)
{
char a[] = "aAeEoOtTlL";
char b[] = "4433007711";
int i;
int j;
for (i = 0 ; c[i] != 0 ; i++)
{
for (j = 0 ; b[j] != 0 ; j++)
{
if (c[i] == a[j])
c[i] = b[j];
}
}
return (c);
}
