#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

/**
*append_text_to_file - appends text at the end of a file
*@filename: name of file
*@text_content: NULL terminated string to add to the file
*Return: 1 on succes, -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
int f, letter;
int i = 0;

if (filename == NULL)
return (-1);
f = open(filename, O_APPEND | O_WRONLY);
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
