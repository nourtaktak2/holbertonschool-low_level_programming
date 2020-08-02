#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * @void: Description of parameter x
 * Return: 0
 */
int main(void)
{
int i, j, k;

for (i = 48 ; i <= 56; i++)
{
for (j = 49; j <= 57; j++)
{
	if (j > i)
	{
	putchar(i);
	putchar(j);
	if (i != 56 || j != 57)
	{
		for (k = 44 ; k >= 32 ; k -= 12)
		{
		putchar(k);
		}
	}
	}
	}
}
putchar('\n');
return (0);
}
