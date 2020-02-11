#include "holberton.h"
/**
* main - Entry point
* _putchar function
* Return: Always 0 (Success)
*/
int main(void)
{
int i = 0;
char ch[] = "Holberton";
while (i <= 8)
{
_putchar(ch[i]);
i++;
}
_putchar('\n');
return (0);
}
