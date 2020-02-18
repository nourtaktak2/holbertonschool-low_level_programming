#include "holberton.h"
/**
*swap_int - swap of two values
*@a:variable
*@b:variable
*return always (0)
*/

void swap_int(int *a, int *b)
{
int x;
x = *a;
*a = *b;
*b = x;
}
