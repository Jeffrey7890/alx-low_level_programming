#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"


void test_vadaic_fund(int n, ...)
{
	va_list ptr;

	void *ch;

	int i;

	va_start(ptr, n);

	i = va_arg(ptr, int);

	va_end(ptr);

	ch = &i;
	printf("vardiac_function_test: %d\n", *((int*) ch));
}
int main(int argc, char *argv[])
{
	if (argc != 4)
		return (-1);
	char c = 'A';
	int n  = atoi(argv[2]), i = -1, flag = 1;

	test_vadaic_fund(1,10);

	printf_c(&c);

	//void (*printf_op_ptr)(void *) = printf_c;

	printf_ptr_type printf_op_ptr = printf_c;

	printf_op_ptr(argv[1]);

	putchar('\n');

	printf_opt arr_printf_ops[] = {
		{"c", printf_c},
		{"i", printf_i},
		{"s", printf_s}
	};

	arr_printf_ops[0].f(argv[1]);
	arr_printf_ops[1].f(&n);
	arr_printf_ops[2].f(argv[3]);

	//flag = (arr_printf_ops[i].c != "i");
	while (flag && i < 3)
	{
		i++;
		flag = (arr_printf_ops[i].c != "s");
		
	}

	putchar('\n');
	printf("flag: %d i: %d\n", flag, i);
	n = 1000;
	if (flag == 0)
		arr_printf_ops[i].f(&n);
	return (0);
}
