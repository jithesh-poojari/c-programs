// count character occurence in a string
#include <stdio.h>
#include <string.h>

int main()
{
  char str[] = "hello", ch = 'l';
  int i, count = 0;
  for (i = 0; i < strlen(str); i++)
  {
    if (str[i] == ch)
    {
      count++;
    }
  }
  printf("Count: %d", count);
  return 0;
}