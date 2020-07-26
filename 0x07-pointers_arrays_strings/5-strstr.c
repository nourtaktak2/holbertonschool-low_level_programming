#include "holberton.h"
/**
 * *_strstr - search a string for any set of bytes.
 * @haystack: string.
 * @needle: string.
 * Return: dest.
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *h = haystack;
char *n = needle;
while (*n == *haystack && *h != '\0' && *haystack != '\0')
{
haystack++;
n++;
}
if (*n == '\0')
return (h);
haystack = h + 1;
}
return (0);
}
