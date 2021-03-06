#include "holberton.h"

/**
 * create_file - create new file
 * @filename: name of file
 * @text_content: str write
 * Return: namber int
 */
int create_file(const char *filename, char *text_content)
{
int fd, state;

if (filename == NULL)
return (-1);
fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR | S_IWUSR);
if (text_content != NULL)
state = write(fd, text_content, strlen(text_content));
if (state == -1)
{
return (-1);
}
close(fd);
return (1);
}
