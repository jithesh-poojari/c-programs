// fibonacci
#include <stdio.h>

int main()
{
  int num1 = 0, num2 = 1, n = 20, temp;
  while (num1 < 20)
  {
    printf("%d  ", num1);
    temp = num1;
    num1 = num2;
    num2 = temp + num2;
  }

  return 0;
}