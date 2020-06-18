#include "holberton.h"
/**
 *more_numbers - function that prints 10 times the numbers .
 */
void more_numbers(void)
{
char x;
char n;

for (n = '0'; n <= '9' ; n++)
{

for (x = '0'; x <= '14'; x++)
{
_putchar(x);
}
_putchar('\n');
}
}
