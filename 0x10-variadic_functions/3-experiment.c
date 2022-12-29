#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
  * printf_c - function print characters only
  * @p: char 
  */
void printf_c(void *p)
{
	printf("%c printf_c Debugging\n",*(char *) p);
	printf("%c", *(char *)p);
}

/**
  * printf_i - function print int
  * @i: integer
  */
void printf_i(void *i)
{
	printf("%d", *(int *)i);
}

/**
  * printf_f - print floats
  * @f: float
  */
void printf_f(void *f)
{
	printf("%f", *(float *)f);
}

/**
  * printf_s - print string
  * @s: string
  */
void printf_s(void *s)
{
	printf("%s", (char *) s);
}

/**
  * print_all - function that prints anything.
  * @format: format of print sequenec
  * @...: variable arguments
 
void print_all(const char * const format, ...)
{
	va_list ap;

	int len, i = 0, j = -1, flag = 1;

	char ptr;
	
	printf_ptr_type ptr = NULL;
	
	char  v_ptr; 

	printf_opt arr_printf_ops[] = {
		{"c", printf_c},
		{"i", printf_i},
		{"f", printf_f},
		{"s", printf_s}
	};

	printf("Debuging\n");
	
	len = strlen(format);

	va_start(ap, format);

	while(i < len)
	{
		printf("Debuging\n");
		while (flag && j < 4)
		{
			j++;
			printf("%d debugging\n", j);
			flag = (*(arr_printf_ops[j].c) != format[i]);
		}
		printf("Debuging\n");
		if (flag == 0)
		{
			printf("%d Debuging\n", j);
			ptr = arr_printf_ops[j].f;
			printf("%d Debuging\n", j);
		}

		if(ptr != NULL)
		{
			printf("%d Debuging\n", j);


			ptr(va_arg(ap, void *));
			printf("%d Debuging\n", j);
		}
	}
}
*/

