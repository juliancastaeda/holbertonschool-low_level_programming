#include "holberton.h"

/**
 * read_textfile - read filename
 * @filename: string of characters to be printed
 * @letters: filename size
 * Return: (ssize_t)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *ptr;
ssize_t a, fd;

if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
ptr = malloc(sizeof(letters));
if (ptr == NULL)
return (0);
a = read(fd, ptr, letters);
write(STDOUT_FILENO, ptr, a);
free(ptr);
close(fd);
return (a);
}
