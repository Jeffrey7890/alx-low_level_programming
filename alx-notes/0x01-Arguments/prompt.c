#include <stdio.h>

int main(void)
{
	char *line = NULL;

	size_t len = 0;

	printf("$ ");
	if ((getline(&line, &len, stdin)) != -1)
	{
		printf("%s", line);
	}
	else
		printf("Error\n");

	return (0);
}
