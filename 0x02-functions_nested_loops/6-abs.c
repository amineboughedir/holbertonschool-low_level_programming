#include "holberton.h"
/**
 *_abs - no such thing as absolute value in this world
 *@n: integer
 *Return: abs n
 */
int _abs(int n)
{
if (n >= 0)
{
return (n);
}

return (n * (-1));
}
