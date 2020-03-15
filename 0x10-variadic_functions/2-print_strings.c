#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
*print_strings - prints strings, followed by a new line.
* @separator: separator between strings.
* @n: number of parameters.
* Return: nothing.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list x;
char *a;
unsigned int i;
va_start(x, n);
for (i = 0 ; i < n ; i++)
{
a = va_arg(x, char*);
if (a != NULL)
printf("%s", a);
else
printf("(nil)");
if (i != n - 1 && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(x);
}
