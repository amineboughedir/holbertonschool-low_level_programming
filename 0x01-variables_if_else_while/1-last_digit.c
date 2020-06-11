#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  {
    printf("Last digit of\n");                                                                           }
  if (n % 10 > 5)
    {
      printf("%d is and is greater than 5\n", n);
    }
  return (0);
 }
