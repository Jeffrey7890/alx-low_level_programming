#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>

/**
  * create_file - create a function that creates a file.
  * @filename: path to file or name of file
  * @text_content: content of file
  * Return: 1 if okay, -1 if fail
  */
int create_file(const char *filename, char *text_content)
{
	int fd, size;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";
	size = strlen(text_content);

	if (write(fd, text_content, size) != size)
		return (-1);

	close(fd);
	return (1);
}

