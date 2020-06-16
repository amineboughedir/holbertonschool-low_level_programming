#include "holberton.h"
/**
 *times_table - function that prints every minute of the day
 *
 *Return: no return
 */
void times_table(void)
{
int i, x;

for (i = 0; i <= 9; ++i)
{
for (x = 0; x <= 9; ++x)
{
if (i * x > 9)
{
if (x != 0)
{
_putchar(',');
_putchar(' ');
}
_putchar((i * x) / 10 + '0');
_putchar((i * x) % 10 + '0');
}
else
{
if (x != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
_putchar((i * x) + '0');
}
}
_putchar('\n');
}
}
