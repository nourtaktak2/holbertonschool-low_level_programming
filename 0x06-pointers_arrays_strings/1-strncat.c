#include "holberton.h"
/**
 * *_strncat - check the code for Holberton School students.
 * @dest : destination.
 * @src : source.
 * @n : number of bytes.
 * Return: pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
char *p;
j = 0;
for (i = 0 ; dest[i] != 0 ; i++)
j++;
if (n > l)
n = j;
for (i = 0 ; i < n ; i++)
{
dest[j + i] = src[i];
}
p = dest;
return (p);
}
