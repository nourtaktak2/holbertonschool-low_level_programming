#include "holberton.h"
/**
 * *_strcpy - copies a string to another string.
 * @dest : destination.
 * @src : source.
 * Return: char value.
 */
char *_strcpy(char *dest, char *src)
{
int i;
int j;
j = 0;

while ((*(src + j) != '\0'))
j++;

for (i = 0 ; i <= j ; i++)
{
dest[i] = src[i];
}
return (&dest[0]);
}
