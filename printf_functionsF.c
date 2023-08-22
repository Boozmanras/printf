#include "main.h"
/**
* print_pointer - Print a pointer address in hexadecimal format
* @ptr: The pointer to print
* @count: Pointer to the character count
*/
void print_pointer(void *ptr, int *count)
{
unsigned long long int num = (unsigned long long int) ptr;
char hexStr[18];
int idx = sizeof(hexStr) - 1;
hexStr[idx] = '\0';

for (int i = 0; i < 16; i++)
{
int digit = num & 15;
hexStr[idx - 1 - i] = (digit < 10) ? ('0' + digit) : ('A' + digit - 10);
num >>= 4;
}

(*count) += write(1, hexStr, sizeof(hexStr) - 1);
}
