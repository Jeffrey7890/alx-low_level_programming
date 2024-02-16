#ifndef __MAIN_H__
#define __MAIN_H__
#include <stddef.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int _putchar(char c);


#endif
