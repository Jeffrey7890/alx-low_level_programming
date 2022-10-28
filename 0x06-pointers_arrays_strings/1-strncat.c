#include "main.h"
#include "string.h"

/**
  * _strncat - copy numbr of on string to dest
  * @dest: destination
  * @src: sourc string
  * @n: number of source string
  * Return: pointer to dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int i, len_dest = strlen(dest), len_src = strlen(src);

	char *ptr = src, *ptr2 = dest;

	if (n < len_src)
	{
		for (i = 0; i < n; i++)
		{
			dest[len_dest] = *ptr;
			ptr++;
			len_dest++;
		}
		dest[len_dest] = '\0';
	}
	else
	{
		i = len_dest;

		while (*ptr != '\0')
		{
			dest[i] = *ptr;
			i++;
			ptr++;
		}
	}
	return (ptr2);
}

