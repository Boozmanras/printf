#include <unistd.h>
#include <stdarg.h>
#include "main.h"
/**
* print_character - Prints a single character.
* @c: The character to be printed.
*/
void print_character(char c)
{
write(1, &c, 1);
}
/**
* print_string - Prints a null-terminated string.
* @s: The string to be printed.
*/
void print_string(char *s)
{
while (*s != '\0')
{
write(1, s, 1);
s++;
}
}
