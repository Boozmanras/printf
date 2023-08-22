#include "main.h"
/**
* print_char - Print a character
* @c: The character to print
* @count: Pointer to the character count
*/
void print_char(char c, int *count)
{
write(1, &c, 1);
(*count)++;
}
/**
* print_string - Print a string
* @s: The string to print
* @count: Pointer to the character count
*/
void print_string(char *s, int *count)
{
while (*s != '\0')
{
write(1, s, 1);
s++;
(*count)++;
}
}
/**
* print_integer - Print an integer
* @num: The integer to print
* @count: Pointer to the character count
*/
void print_integer(int num, int *count)
{
char numStr[12];
int len = snprintf(numStr, sizeof(numStr), "%d", num);
write(1, numStr, len);
(*count) += len;
}
