#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits.
 * @void: Description of parameter x
 * Return: 0
 */
int main(void)
{
int i, j, k, x;
for (i = 48 ; i <= 55; i++)
{
for (j = 49; j <= 56; j++)
{
for (k = 50; k <= 57; k++)
{
if (j > i && k > j)
{
putchar(i);
putchar(j);
putchar(k);
if (i != 55 || j != 56 || k != 57)
{
for (x = 44 ; x >= 32 ; x -= 12)
{
putchar(x);
}
}
}
}
}
}
putchar('\n');
return (0);
}
