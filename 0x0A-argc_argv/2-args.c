#include "main.h"
#include <stdio.h>


/**
 * main - prints all args from command line
 *
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);

	return (0);
}
