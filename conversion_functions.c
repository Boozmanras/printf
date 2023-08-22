#include "main.h"
/**
* print_case - Print the corresponding value based on the conversion specifier
* @specifier: The conversion specifier
* @args: The va_list containing the arguments
* @count: Pointer to the character count
*/
void print_case(char specifier, va_list args, int *count)
{
switch (specifier)
{
case 'c':
print_char(va_arg(args, int), count);
break;
case 's':
print_string(va_arg(args, char*), count);
break;
case 'd':
case 'i':
print_integer(va_arg(args, int), count);
break;
case 'u':
print_unsigned_int(va_arg(args, unsigned int), count);
break;
case 'o':
print_octal(va_arg(args, unsigned int), count);
break;
case 'x':
case 'X':
print_hex(va_arg(args, unsigned int), specifier, count);
break;
case 'p':
print_pointer(va_arg(args, void*), count);
break;
default:
print_char(specifier, count);
break;
}
}
