#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

void print_char(char c, int *count);
void print_string(char *s, int *count);
void print_integer(int num, int *count);
void print_unsigned_int(unsigned int num, int *count);
void print_octal(unsigned int num, int *count);
void print_hex(unsigned int num, char format, int *count);
void print_pointer(void *ptr, int *count);

int _printf(const char *format, ...);

#endif
