#include <stdio.h>

#define LEN 0



char *_strcpy(char *dest, char *src);

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char cpy[LEN + 1] = {0};
	char *str;
	char *ret;


	str = "Z";
	ret = _strcpy(cpy, str);
	printf("%s\n%s\n%s\n", str, cpy, ret);
	return (0);
}
