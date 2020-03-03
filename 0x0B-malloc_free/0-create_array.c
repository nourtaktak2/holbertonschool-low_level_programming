#include "holberton.h"
#include <stdlib.h>

/**
* *create_array - creates an array of chars, and initializes it
* @size : size of array
* @c : the specific char
* Return: the char initialized in the array
*/

char *create_array(unsigned int size, char c)
{
  
char *x;
unsigned int i;
if (size != 0)
{
  
x= malloc(size * sizeof(char));
if (x == 0)
return (NULL);
else
{
  
for (i = 0 ; i < size ; i++)
x[i] = c;
return (x);
}
}
else
return (NULL);
}
