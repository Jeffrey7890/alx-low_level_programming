#include <stdio.h>
#include "main.h"

int main(void)
{
	char *word = "Jeffrey\0";
	//printf("%c\n", word[0]);
	print_putchar(word);
	return (0);

}
