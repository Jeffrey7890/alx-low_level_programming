#ifndef MAIN_H
#define MAIN_H

#include <limits.h>

char *_strstr(char *haystack, char *needle);
int _isdigit(int c);

int _isupper(int c);
char *_memcpy(char *dest, char *src, unsigned int n);
void print_most_numbers(void);
char *_memset(char *s, char b, unsigned int n);
char *_strpbrk(char *s, char *accept);

int _strcmp(char *s1, char *s2);
char *_strchr(char *s, char c);
int mul(int c, int d);
unsigned int _strspn(char *s, char *accept);
void print_numbers(void);
void print_chessboard(char (*a)[8]);
void more_numbers(void);
void set_string(char **s, char *to);
int _putchar(char c);

void print_square(int size);

void print_line(int n);
	
void print_diagonal(int n);

void rev_string(char *s);

char *_strcat(char *dest, char *src);

void reset_to_98(int *n);

void print_diagsums(int *a, int size);
char *_strcpy(char *dest, char *src);

char *string_toupper(char *);

void swap_int(int *a, int *b);

void reverse_array(int *a, int n);

char *_strncpy(char *dest, char *src, int n);

int _strlen(char *s);

void _puts(char *str);

char *_strncat(char *dest, char *src, int n);

void print_rev(char *s);

void puts_half(char *str);

void print_array(int *a, int n);

void puts2(char *str);
#endif
