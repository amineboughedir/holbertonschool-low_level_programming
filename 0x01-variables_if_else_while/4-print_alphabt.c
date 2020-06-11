#include <stdio.h>
/**
 * main -dot show q e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char x;
for (x = 'a'; x - 1 < 'z'; ++x)
{
if ((x != 'q') && (x != 'e'))
{
putchar(x);
}
}
putchar('\n');
return (0);
}
