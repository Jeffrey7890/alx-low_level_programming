#include "main.h"
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>


#define BUF_SIZE 1024

/**
 * errClose - check closing files
 * @fd: file description to close
 */
void errClose(int fd)
{
	if (close(fd) < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * errWrite - check write error
 * @file: file name to check
 */
void errWrite(char *file)
{
	dprintf(2, "Error: Can't write to %s\n", file);
	exit(99);
}


/**
 * main - main file for my copy
 * @argc: number of argument passed
 * @av: argument list
 * Return: 0 and exit 88, 99, 100 on fail
 */
int main(int argc, char *av[])
{
	int inputFd, outputFd, perm;
	ssize_t nread;
	char buf[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	outputFd = open(av[1], O_RDONLY);
	if (outputFd < 0)
	{
		dprintf(2, "Error: Can't read from %s\n", av[1]);
		exit(98);
	}

	perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	inputFd = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, perm);
	if (inputFd < 0)
		errWrite(av[2]);

	while ((nread = read(outputFd, buf, BUF_SIZE)) > 0)
		if (write(inputFd, buf, nread) != nread)
			errWrite(av[2]);
	errClose(inputFd);
	errClose(outputFd);
	return (0);
}
