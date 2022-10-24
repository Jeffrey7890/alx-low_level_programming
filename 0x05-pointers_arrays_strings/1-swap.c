#include "main.h"

/**
  * swap_int - swaps two integers
  * @a: first int to swap
  * @b: second int to swap
  */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

