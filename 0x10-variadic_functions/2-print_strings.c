#include <stdio.h>
#include <stdarg.h>


/**
  * print_strings -  function that prints numbers, followed by a new line.
  * @separator: char to seprated the nmbers
  * @n: number of numbers
  * @...: abitaray arrays, "so sleepy"
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	char *s;

	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);
		if (s != NULL)
			printf("%s", s);
		else
			printf("(nill)");
		if ((i < n - 1) && (separator != NULL))
			printf("%s", separator);
	}
	va_end(ap);

	printf("\n");
}

