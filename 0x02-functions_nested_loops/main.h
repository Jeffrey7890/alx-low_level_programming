#ifndef _PUTCHAR
#define _PUTCHAR
#include <stdio.h>
/**
  * print_alphabet: prints a-z
  */
void print_alphabet()
{
	int i;

	for (i = 97; i < (97+26); i++)
	{
		putchar(i);
	}
	putchar('\n');
}



void print_putchar(const char *word)
{
	int i = 0;
        char ch = word[i];
	while (ch != '\0')
	{
		putchar(ch);
		++i;
		ch = word[i];
		
	}
	putchar('\n');
}

#endif
