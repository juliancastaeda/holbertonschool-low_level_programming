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
int a;
int fd = open(filename, O_RDONLY);

if (fd == '\0')
return (0);

if (fd == '\0')
return (0);

ptr = malloc(sizeof(letters));

if (letters == '\0')
return (0);
a = read(fd, ptr, letters);
write(STDIN_FILENO, ptr, letters);
close(fd);
return (a);
}
