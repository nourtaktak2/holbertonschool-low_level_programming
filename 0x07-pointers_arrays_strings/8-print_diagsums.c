#include "holberton.h"
#include <stdio.h>
/**
* print_diagsums - a function that prints the sum
* of the two diagonals of a square matrix of integers.
*@a: array
*@size: length of the array
*/
void print_diagsums(int *a, int size)
{
int ar = size * size;
int result = 0;
int sum = 0;
int i;
int x;
for (i = 0; i < ar; i += size + 1)
{
result += a[i];
}
for (x = size - 1; x < ar - 1; x += (size - 1))
{
sum += a[x];
}
printf("%d, %d\n", result, sum);
}
