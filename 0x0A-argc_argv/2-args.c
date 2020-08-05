#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 * @argc : argument count.
 * @argv : argument vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i <= argc - 1; i++)
{
printf("%s\n", argv[i]);
}
(void)argc;
return (0);
}
