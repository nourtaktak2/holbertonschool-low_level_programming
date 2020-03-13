#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all parameters.
 * @n : number of parameters
 * Return: the sum of parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
va_list arg;
int sum = 0;
unsigned int s;

if (n == 0)
return (0);
va_start(arg, n);
for (s = 0 ; s < n ; s++)
sum += va_arg(arg, int);
va_end(arg);
return (sum);
}
