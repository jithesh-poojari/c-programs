// prime number
#include <stdio.h>

int main()
{
  int n = 20, i, j;
  printf("Prime numbers up to %d: ", n);

  for (i = 2; i <= n; i++)
  {
    int isPrime = 1;

    for (j = 2; j * j <= i; j++)
    {
      if (i % j == 0)
      {
        isPrime = 0;
        break;
      }
    }

    if (isPrime)
    {
      printf("%d  ", i);
    }
  }

  return 0;
}
