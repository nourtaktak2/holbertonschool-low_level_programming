#include "holberton.h"
/**
 * *rot13 - check the code for Holberton School students.
 * @c : variable.
 * Return: string c.
 */
char *rot13(char *c)
{
int i, j;
char org[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char r13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0 ; c[i] != 0 ; i++)
{
for (j = 0 ; j < 53 ; j++)
{
if (org[j] == c[i])
{
c[i] = r13[j];
break;
}
}
}
return (c);
}
