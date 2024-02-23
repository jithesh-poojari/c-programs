// A program to reverse a number and find the sum of individual digits. Also to check for palindrome.
#include <stdio.h>

int main()
{
  long num, temp, sum, rev;
  printf("Enter the number: ");
  scanf("%ld", &num);
  temp = num;
  rev = sum = 0;
  while (temp > 0)
  {
    rev = rev * 10 + temp % 10;
    sum += temp % 10;
    temp /= 10;
  }
  printf("Sum of digits of number %ld is %ld", num, sum);
  if (num == rev)
  {
    printf("\n%ld is a Palindrome", num);
  }
  else
  {
    printf("\n%ld is not a Palindrome", num);
  }

  return 0;
}