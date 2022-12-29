#include "main.h"
#include "string.h"
#include "stdio.h"

char REM = '0';

char char_sum(char a, char b, char *rem)
{
	int sum = (a - '0') + (b - '0') + (*rem - '0');
	*rem = ((sum - (sum % 10)) / 10) + '0';
	/*printf("REM: %c\n", REM);*/
	return ((sum % 10) + '0');
}


char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = strlen(n1) - 1  , j = strlen(n2) - 1;
	if ((i + 1) >= size_r || (j + 1) >= size_r)
		return (0);
	/*printf("size: %d, I: %d, J: %d\n\n", size_r, i, j);*/
	/*printf("%s", n1);

	printf("I [%d], J [%d]\n", i, j);*/

	r[size_r  - 1] = '\0';
	size_r -= 1;

	for (; i >= 0 && j >= 0; i--, j--, size_r--)
	{
		r[size_r] = char_sum(n1[i], n2[j], &REM);

		/*printf("size: %d size_n1: %d, size_n2: %d, REM: %c value: %c\n", size_r, i, j, REM, r[size_r]);*/

	}
	r[size_r] = char_sum('0','0', &REM);

	for ( ; i >= 0; i--, size_r--) 
	{
		r[size_r] = char_sum(n1[i],'0', &REM);
	/* 	printf("size before for: %d", size_r);*/

	}

	for ( ; j >= 0; j--, size_r--)
	{
		r[size_r] = char_sum(n2[j],'0', &REM);
	}
	/*printf("Buffer: %s\n", (r + 12 ));*/
	printf("size: %d\nuffer: %s\n\n\n", size_r, (r + 1));
	return (r + size_r);
}
