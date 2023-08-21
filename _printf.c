#include <stdarg.h>
#include "main.h"
/**
* _printf - Custom printf function with %c, %s, %%, and %d support.
* @format: The format string containing specifiers and text.
* @...: Optional arguments for format specifiers.
*
* Return: The number of characters printed.
*/
int _printf(const char *format, ...)
{
int count = 0;
va_list args;
va_start(args, format);
while (*format)
{
if (*format == '%')
{
format++;
switch (*format)
{
case 'c':
print_character(va_arg(args, int));
count++;
break;
case 's':
print_string(va_arg(args, char*));
count++;
break;
case '%':
print_percentage();
count++;
break;
case 'd':
print_integer(va_arg(args, int));
break;
default:
write(1, format, 1);
count++;
break;
}
}
else
{
write(1, format, 1);
count++;
}
format++;
}
va_end(args);
return (count);
}

