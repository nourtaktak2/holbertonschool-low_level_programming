#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_numbers - prints numbers, followed by a new line.
* @separator: string to be printed between numbers.
* @n: number of parameters.
* Return: nothing.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list x;
unsigned int i;
int a;

va_start(x, n);
for (i = 0 ; i < n ; i++)
{
a = va_arg(x, int);
printf("%d", a);
if (i < n - 1 && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(x);
}
