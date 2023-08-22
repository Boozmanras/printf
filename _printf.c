#include "main.h"
/**
* _printf - Custom printf function
* @format: Format string
*
* Return: Number of characters printed
*/
int _printf(const char *format, ...)
{
int count = 0;
va_list args;
va_start(args, format);
while (*format != '\0')
{
if (*format == '%')
{
format++;
print_case(*format, args, &count);
}
else
{
print_char(*format, &count);
}
format++;
}
va_end(args);
return (count);
}
