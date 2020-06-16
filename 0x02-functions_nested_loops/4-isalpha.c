include "holberton.h"
/**
 *_isalpha - a function that checks for alphabetic character.
 *@c: int
 *Return: 1 or -1 or 0
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 122) && (c >= 97 && c <= 90))
{
return (1);
}
else
{
return (0);
}
}
