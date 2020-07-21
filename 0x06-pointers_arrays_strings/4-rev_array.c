#include "holberton.h"
/**
 * reverse_array - reverses an array integers
 * @a : array
 * @n : integer
 * Return: void
 */
void reverse_array(int *a, int n)
{
int i;
int j;
int b[50];
j = 0;
for (i = n - 1 ; i >= 0 ; i--)
{
b[j] = a[i];
j++;
}
for (i = 0 ; i < n ; i++)
a[i] = b[i];
}
