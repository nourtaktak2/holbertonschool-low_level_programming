#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc : argument count.
 * @argv : argument vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
printf("%d\n", argc - 1);
argv[0] = "\0";
return (0);
}
