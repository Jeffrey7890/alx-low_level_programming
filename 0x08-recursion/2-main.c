#include "main.h"
#include "string.h"
#include <stdio.h>

/**
   * main - check the code
    *
     * Return: Always 0.
      */
int main(void)
{
	    int n, n1;
	    n1 = strlen(NULL);
	        n = _strlen_recursion(NULL);
		    printf("strlen: %d strlen_r: %d\n", n1, n);
		        return (0);
}
