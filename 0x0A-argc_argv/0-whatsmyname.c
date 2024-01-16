#include "main.h"
#include <stdio.h>


/**
 * main - recieves arguments from command line
 *
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
