#include <unistd.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
  * read_textfile - reads tesxt files and prints to the standard output
  * @filename: name of file or path to the file
  * @letters: number of letter to print
  * Return: actual number of letters it coculd read and print
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, count_r, count_w;

	char *buf = malloc(letters * sizeof(char));

	if (buf == NULL)
	{
		free(buf);
		return (0);
	}

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	count_r = read(fd, buf, letters);

	if (count_r == -1)
		return (0);

	buf[letters] = '\0';

	count_w = write(STDOUT_FILENO, buf, count_r);

	if (count_w == -1 || count_w != (int)letters)
		return (0);

	free(buf);

	return (count_r);
}
