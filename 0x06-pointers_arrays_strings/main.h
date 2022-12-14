#ifndef MAIN_H
#define MAIN_H

#include <limits.h>

int _isdigit(int c);

int _isupper(int c);
void print_number(int n);
void print_most_numbers(void);

char *cap_string(char *);

char *rot13(char *);

char *leet(char *);

int _strcmp(char *s1, char *s2);

int mul(int c, int d);

void print_numbers(void);

void more_numbers(void);

int _putchar(char c);

void print_square(int size);

void print_line(int n);
	
void print_diagonal(int n);

void rev_string(char *s);

char *_strcat(char *dest, char *src);

void reset_to_98(int *n);

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
