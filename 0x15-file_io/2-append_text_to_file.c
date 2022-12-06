#include <stdio.h>
#include <string.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>

/**
  * append_text_to_file - addend text to end of file
  * @filename: path to file or filename
  * @text_content: content to write to file
  * Return: 1 if success, -1 if failed
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, size;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	size = strlen(text_content);

	if (write(fd, text_content, size) != size)
		return (-1);

	return (1);
}

