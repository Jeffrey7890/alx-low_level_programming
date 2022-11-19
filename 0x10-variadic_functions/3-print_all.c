#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
  * print_all - print all arguments
  * @format: format string
  */
void print_all(const char *format, ...)
{
	int i = 0, len = strlen(format);

	char *str;

	va_list ptr;

	va_start(ptr, format);
	while (i <= len)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c, ", va_arg(ptr, int));
				break;
			case 'i':
				printf("%d, ", va_arg(ptr, int));
				break;
			case 's':
				str = va_arg(ptr, char*);
				if (str != NULL)
					printf("%s, ", str);
				else
					printf("(nil)");
				break;
			case 'f':
				printf("%f, ", va_arg(ptr, double));
				break;
			default:
				break;
		}
		i++;
	}
	va_end(ptr);
	putchar(127);
	putchar(127);
	printf("\n");
}
