#ifndef VARIADIC_FUNC_H
#define VARIADIC_FUNC_H


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

typedef void (*printf_ptr_type)(void *);

typedef struct printf_op
{
	char *c;
	void (*f)(void *);
} printf_opt;

void print_all(const char * const format, ...);
void printf_c(void *);
void printf_i(void *);
void printf_s(void *);
void printf_f(void *);

#endif
