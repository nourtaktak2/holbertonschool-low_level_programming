#include "holberton.h"
/**
 * rev_string - reverses a string.
 * @s : string.
 * Return: Void.
 */
void rev_string(char *s)
{
int i;
int j;
int x;
j = 0;
for (i = 0 ; s[i] != 0 ; i++)
{
j++;
}
for (i = 0 ; i < j / 2 ; i++)
{
x = s[i];
s[i] = s[j - j - i];
s[j - j - i] = x;
}
}
