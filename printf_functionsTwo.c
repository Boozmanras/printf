#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
* print_percentage - Prints a percentage character.
*/
void print_percentage(void)
{
char percent = '%';
write(1, &percent, 1);
}

/**
* print_integer - Prints an integer.
* @num: The integer to be printed.
*/
void print_integer(int num)
{
if (num == 0)
{
write(1, "0", 1);
}
else
{
char buffer[20];
int index = 0;
while (num > 0)
{
buffer[index] = (num % 10) + '0';
num /= 10;
index++;
}
while (index > 0)
{
index--;
write(1, &buffer[index], 1);
}
}
}
