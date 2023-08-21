#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);
void print_character(char c);
void print_string(char *s);
void print_percentage(void);
void print_integer(int num);

#endif
