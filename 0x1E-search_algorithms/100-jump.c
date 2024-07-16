#include <math.h>
#include <stdio.h>
#include "search_algos.h"


int jump_search(int *array, size_t size, int value)
{
	size_t a, b;

	a = 0;
	b = sqrt(size);
	printf("size: %ld, a: %ld, b: %ld", size, a, b);
	return(0);
}


int main()
{
	int array[] = {1, 2, 3};
	jump_search(array, 3, 2);
	return(0);
}
	
