#include "main.h"
/**
* print_unsigned_int - Print an unsigned integer
* @num: The unsigned integer to print
* @count: Pointer to the character count
*/
void print_unsigned_int(unsigned int num, int *count)
{
char numStr[12];
int len = snprintf(numStr, sizeof(numStr), "%u", num);
write(1, numStr, len);
(*count) += len;
}

/**
* print_octal - Print an octal number
* @num: The octal number to print
* @count: Pointer to the character count
*/
void print_octal(unsigned int num, int *count)
{
char octStr[22];
int len = snprintf(octStr, sizeof(octStr), "%o", num);
write(1, octStr, len);
(*count) += len;
}
