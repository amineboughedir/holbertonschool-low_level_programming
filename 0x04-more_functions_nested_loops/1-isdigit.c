#include "holberton.h"
/**
 *isdigit - function that checks for a digit
 *@c: integer
 *Return: 0 or 1
 */
int _isdigit(int c)
{

if (c >= '0' && c <= '9')
{
return (1);
}
else
return (0);

}
_putchar('\n');
}
