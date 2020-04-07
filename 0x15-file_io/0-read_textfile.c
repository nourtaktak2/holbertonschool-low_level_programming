#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
* read_textfile - reads a text file and prints it to
* the POSIX standard output.
* @filename: filename.
* @letters: number of letters of the file.
* Return: the actual number of letters
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
int x;
ssize_t r, w;
char *p;

p = malloc(sizeof(char) * letters);

if (filename == NULL)
return (0);

x = open(filename, O_RDONLY);
if (x == -1)
return (0);
r = read(x, p, letters);
if (r == -1)
return (0);

*(p + r) = '\0';

w = write(STDOUT_FILENO, p, r);
if (w == -1 || w != r)
return (0);
close(x);
return (w);
}
