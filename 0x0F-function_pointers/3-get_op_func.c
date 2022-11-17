#include "3-calc.h"
#include <stdio.h>
#include <string.h>

/**
 * get_op_func - selects the correct function to perform
 * @s: operator char
 * Return: pointer to function
 */
typedef int (*op_func_ptr)(int a, int b);

op_func_ptr get_op_func(char *s)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod}
	};

	int i;

	i = 0;
	while (i < 5)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}

		i++;
	}
	return (NULL);
}

