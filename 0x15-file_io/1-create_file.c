#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

/**
*create_file - a function that creates a file
*@filename: name of file to be created
*@text_content: NULL terminated string to write to the file
*Return: 1 on succes, -1 on failure.
*/

int create_file(const char *filename, char *text_content)
{
int f, letter;
int i = 0;

if (filename == NULL)
return (-1);
f = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
if (f == -1)
return (-1);
if (text_content != NULL)
{
while (text_content[i] != '\0')
i++;
letter = write(f, text_content, i);
}
if (letter == -1)
{
close(f);
return (letter);
}
close(f);
return (1);
}
