
#include "main.h"
/**
  * main - print _putchar
  * Return: zero
  */

void print_putchar(const char *word)
{
	int i = 0;
        char ch = word[i];
	while (ch != '\0')
	{
		_putchar(ch);
		++i;
		ch = word[i];
		
	}
	putchar('\n');
}



