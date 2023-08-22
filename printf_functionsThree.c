#include "main.h"
/**
* print_hex - Print a hexadecimal number
* @num: The hexadecimal number to print
* @format: The format specifier ('x' or 'X')
*          for lowercase or uppercase hex letters
* @count: Pointer to the character count
*/
void print_hex(unsigned int num, char format, int *count)
{
int length = (num == 0) ? 1 : 0;
unsigned int temp = num;
while (temp > 0)
{
length++;
temp >>= 4;
}
char hexStr[length + 1];
hexStr[length] = '\0';
int idx = length - 1;
const char *hexDigits = (format == 'x')
? "0123456789abcdef"
: "0123456789ABCDEF";
if (num == 0)
{
hexStr[idx] = hexDigits[0];
}
else
{
while (num > 0)
{
int digit = num & 15;
hexStr[idx] = hexDigits[digit];
num >>= 4;
idx--;
}
}
write(1, hexStr, length);
(*count) += length;
}
