#ifndef MAIN_H
#define MAIN_H

#include <limits.h>

char *create_array(unsigned int size, char c);
int _isdigit(int c);
char *_strdup(char *str);
int _isupper(int c);
char *str_concat(char *s1, char *s2);
void print_most_numbers(void);
int **alloc_grid(int width, int height);
int mul(int c, int d);
void free_grid(int **grid, int height);
void print_numbers(void);
char *argstostr(int ac, char **av);
void more_numbers(void);
void *malloc_checked(unsigned int b);
int _putchar(char c);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void print_square(int size);

void print_line(int n);
	
void print_diagonal(int n);

void rev_string(char *s);

void reset_to_98(int *n);

char *_strcpy(char *dest, char *src);

void swap_int(int *a, int *b);

int _strlen(char *s);

void _puts(char *str);

void print_rev(char *s);

void puts_half(char *str);

void print_array(int *a, int n);

void puts2(char *str);
#endif
