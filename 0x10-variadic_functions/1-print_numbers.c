#include <stdio.h>
#include <stdarg.h>


/**
  * print_numbers -  function that prints numbers, followed by a new line.
  * @separator: char to seprated the nmbers
  * @n: number of numbers
  * @...: abitaray arrays, "so sleepy"
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if ((i < n - 1) && (separator != NULL))
			printf("%s", separator);
	}
	va_end(ap);

	printf("\n");
}

