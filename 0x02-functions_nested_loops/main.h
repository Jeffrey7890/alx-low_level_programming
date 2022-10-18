#ifndef _PUTCHAR
#define _PUTCHAR

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
