#include <stdio.h>
#include <stdlib.h>

#include <string.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>

#include "main.h"

#define RD 1

#define WR 2

#define CLOSE 3

#define BUFF_SIZE 1024



void error_check(struct file_t *, int, int);

/**
  * main - copy on frile to another
  * @ac: nb of commandline args
  * @argv: array of cmdl args
  * Return: zero
  */
int main(int ac, char **argv)
{

	struct file_t file_from, file_to;

	char buf[BUFF_SIZE];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from.fd = open(argv[1], O_RDONLY);
	file_from.file_name = argv[1];
	file_from.rdwr = 1;
	file_from.close = 0;

	error_check(&file_from, 98, RD);

	file_to.fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	/* file_to.fd = creat(file_to.file_name, 0664); */
	file_to.file_name = argv[2];
	file_to.rdwr = 1;
	file_to.close = 0;

	error_check(&file_to, 99, WR);

	while (file_from.rdwr && file_to.rdwr)
	{
		file_from.rdwr = read(file_from.fd, buf, BUFF_SIZE);
		error_check(&file_from, 98, RD);
		buf[file_from.rdwr] = '\0';

		/* printf("n byts read %d\n", file_from.rdwr); */
		/* printf("%s\n", buf); */

		file_to.rdwr = write(file_to.fd, buf, file_from.rdwr);
		error_check(&file_to, 99, WR);
	}

	file_from.close = close(file_from.fd);
	error_check(&file_from, 100, CLOSE);

	file_to.close = close(file_to.fd);
	error_check(&file_from, 100, CLOSE);

	return (0);
}

/**
  * error_check - hellper to check file stat
  * @file: structur of file stat
  * @ext_code: codes to texit 97, 98,99, 100
  * @type: specifie the type of operation read, write, close
  */
void error_check(struct file_t *file, int ext_code, int type)
{
	if (file->fd == -1)
	{
		if (type == RD)
		{
			dprintf(2, "Error: Can't read from file %s\n", file->file_name);
			exit(ext_code);
		}
		else if (type == WR)
		{
			dprintf(2, "Error: Can't write to file %s\n", file->file_name);
			exit(ext_code);
		}
	}

	if (file->close == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file->fd);
		exit(ext_code);
	}
}












