#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s : string
 * @accept : string
 * Return: number of bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int x;
char *p;
for (x = 0 ; *s ; s++, x++)
{
for (p = accept ; *p && *p != *s ; p++)
;
if (!*p)
break;
}
return (x);
}
