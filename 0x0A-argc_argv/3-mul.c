#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of arguments passed into it.
 * @argc : argument count.
 * @argv : argument vector.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
int i, j, k;
if (argc == 3)
{
k = 1;
i = atoi(argv[1]);
j = atoi(argv[2]);
k = i *j;
printf("%d\n", k);
return (0);
argv[argc] = '\0';
}
else
{
printf("Error\n");
return (1);
}
}