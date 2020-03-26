#include "holberton.h"
#include <stdlib.h>
/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: binary number
* Return: the converted number, or 0 if
* there is one or more chars in the string b that is not 0 or 1.
* b is NULL
*/

unsigned int binary_to_uint(const char *b)
{
unsigned int k, a, x;
int i, len;

if (b == NULL)
return (0);

len = 0;
for (i = 0 ; b[i] != '\0' ; i++)
{
if (b[i] != '0' && b[i] != '1')
return (0);
len++;
}
len--;
k = 0;
x = 1;
for (i = len ; i >= 0 ; i--)
{
if (b[i] == '0')
a = 0;
if (b[i] == '1')
a = 1;
k = k + a *x;
x = x * 2;
}
return (k);
}
