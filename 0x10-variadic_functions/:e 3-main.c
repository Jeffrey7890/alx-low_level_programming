#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
  * print_all - print all arguments
  * @format: format string
  */
void print_all(const char* format, ...)
{
	int i = 0, len = strlen(format), nb;

	char ch, *str;

	float f;

	va_list ptr;

	va_start(ptr, format);

	while (i < len)
	{
		switch(format[i])
		{
			case 'c':
				ch = va_arg(ptr, int);
				printf("%c", ch);
				break;
			case 'i':
				nb = va_arg(ptr, int);
				printf("%d", nb);
				break;
			case 's':
				str = va_arg(ptr, char*);
				if (str != NULL)
					printf("%s", str);
				else
					printf("(nil)");
				break;

			case 'f':
				f = va_arg(ptr, double);
				printf("%f", f);
				break;
			default:
				break;
		}
		if (i < len - 1)
			printf(", ");
	}
}

