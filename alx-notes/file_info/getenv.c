#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern char **environ;

char *_getenv(const char *name)
{
	unsigned int i;

	char *dest;

	i = 0;

	while (environ[i] != NULL)
	{
		if ((dest = strstr(environ[i], name)))
		{
			return (dest + strlen(name) + 1);
		}
		i++;
	}
	return (NULL);
}

int main(void)
{
	char *source = "XXXabcYY";
	char *dest = strstr(source, "abc");
	printf("dest: [%s]\n", dest);
	printf(" getenv:%s\n", getenv("PATH"));
	printf("_getenv: %s\n", _getenv("PATH"));

	return (0);
}
