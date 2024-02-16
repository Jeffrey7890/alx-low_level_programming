#include "main.h"
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <unistd.h>


/**
 * read_textfile - reads a text file men
 * @filename: name of file
 * @letters: number of letters to print
 * Return: number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t nread;
	int fd;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	nread = read(fd, buf, letters);
	if (nread < 0)
		return (0);

	if (write(STDIN_FILENO, buf, nread) != nread)
		return (0);
	free(buf);
	close(fd);
	return (nread);
}
