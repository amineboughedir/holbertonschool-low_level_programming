#include "holberton.h"
/**
 * print_most_numbers -dot show 2 4
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
char x;
for (x = '0'; x <= '9'; x++)
{
if ((x != '2') && (x != '4'))
{
putchar(x);
}
}
putchar('\n');
return (0);
}
