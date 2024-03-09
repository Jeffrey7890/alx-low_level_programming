#include "function_pointers.h"
#include <stdlib.h>


/**
 * print_name - prints name char
 * @name: argument of function f
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}
