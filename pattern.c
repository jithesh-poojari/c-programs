// A program to reverse a number and find the sum of individual digits. Also to check for palindrome.
#include <stdio.h>

int main()
{
  int i, j, n = 5;
  char ch = '*';

  // *  *  *  *  *
  // *  *  *  *  *
  // *  *  *  *  *
  // *  *  *  *  *
  // *  *  *  *  *
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      printf("%c  ", ch);
    }
    printf("\n");
  }

  printf("\n");

  // *  *  *  *  *
  // *           *
  // *           *
  // *           *
  // *  *  *  *  *
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
      {
        printf("%c  ", ch);
      }
      else
      {
        printf("   ");
      }
    }
    printf("\n");
  }

  printf("\n");

  // *
  // *  *
  // *  *  *
  // *  *  *  *
  // *  *  *  *  *
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < i + 1; j++)
    {
      printf("%c  ", ch);
    }
    printf("\n");
  }

  printf("\n");

  // *
  // *  *
  // *     *
  // *        *
  // *  *  *  *  *
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < i + 1; j++)
    {
      if (i == n - 1 || j == 0 || j == i)
      {
        printf("%c  ", ch);
      }
      else
      {
        printf("   ");
      }
    }
    printf("\n");
  }

  printf("\n");

  // *  *  *  *  *
  // *  *  *  *
  // *  *  *
  // *  *
  // *
  for (i = 0; i < n; i++)
  {
    for (j = n; j > i; j--)
    {
      printf("%c  ", ch);
    }
    printf("\n");
  }

  printf("\n");

  // *  *  *  *  *
  // *        *
  // *     *
  // *  *
  // *
  for (i = 0; i < n; i++)
  {
    for (j = n; j > i; j--)
    {
      if (i == 0 || j == n || j == i + 1)
      {
        printf("%c  ", ch);
      }
      else
      {
        printf("   ");
      }
    }
    printf("\n");
  }

  printf("\n");

  //             *
  //          *  *
  //       *  *  *
  //    *  *  *  *
  // *  *  *  *  *
  for (i = 0; i < n; i++)
  {
    for (j = n - 1; j > i; j--)
    {
      printf("   ");
    }
    for (j = 0; j < i + 1; j++)
    {
      printf("%c  ", ch);
    }
    printf("\n");
  }

  printf("\n");

  //             *
  //          *  *
  //       *     *
  //    *        *
  // *  *  *  *  *
  for (i = 0; i < n; i++)
  {
    for (j = n - 1; j > i; j--)
    {
      printf("   ");
    }
    for (j = 0; j < i + 1; j++)
    {
      if (i == n - 1 || j == 0 || j == i)
      {
        printf("%c  ", ch);
      }
      else
      {
        printf("   ");
      }
    }
    printf("\n");
  }

  printf("\n");

  // *  *  *  *  *
  //    *  *  *  *
  //       *  *  *
  //          *  *
  //             *
  for (i = 0; i < n; i++)
  {
    for (j = 1; j < i + 1; j++)
    {
      printf("   ");
    }
    for (j = n; j > i; j--)
    {
      printf("%c  ", ch);
    }
    printf("\n");
  }
  printf("\n");

  // *  *  *  *  *
  //    *        *
  //       *     *
  //          *  *
  //             *
  for (i = 0; i < n; i++)
  {
    for (j = 1; j < i + 1; j++)
    {
      printf("   ");
    }
    for (j = n; j > i; j--)
    {
      if (i == 0 || j == n || j == i + 1)
      {
        printf("%c  ", ch);
      }
      else
      {
        printf("   ");
      }
    }
    printf("\n");
  }
  printf("\n");

  //     *
  //    * *
  //   * * *
  //  * * * *
  // * * * * *
  for (i = 0; i < n; i++)
  {
    for (j = n - 1; j > i; j--)
    {
      printf(" ");
    }
    for (j = 0; j < i + 1; j++)
    {
      printf("%c ", ch);
    }
    printf("\n");
  }

  printf("\n");

  //     *
  //    * *
  //   *   *
  //  *     *
  // * * * * *
  for (i = 0; i < n; i++)
  {
    for (j = n - 1; j > i; j--)
    {
      printf(" ");
    }
    for (j = 0; j < i + 1; j++)
    {
      if (i == n - 1 || j == 0 || j == i)
      {
        printf("%c ", ch);
      }
      else
      {
        printf("  ");
      }
    }
    printf("\n");
  }

  printf("\n");

  // * * * * *
  //  * * * *
  //   * * *
  //    * *
  //     *
  for (i = 0; i < n; i++)
  {
    for (j = 1; j < i + 1; j++)
    {
      printf(" ");
    }
    for (j = n; j > i; j--)
    {
      printf("%c ", ch);
    }
    printf("\n");
  }

  printf("\n");

  // * * * * *
  //  *     *
  //   *   *
  //    * *
  //     *
  for (i = 0; i < n; i++)
  {
    for (j = 1; j < i + 1; j++)
    {
      printf(" ");
    }
    for (j = n; j > i; j--)
    {
      if (i == 0 || j == n || j == i + 1)
      {
        printf("%c ", ch);
      }
      else
      {
        printf("  ");
      }
    }
    printf("\n");
  }

  printf("\n");

  //     *
  //    * *
  //   * * *
  //  * * * *
  // * * * * *
  //  * * * *
  //   * * *
  //    * *
  //     *
  for (i = 0; i < n; i++)
  {
    for (j = n - 1; j > i; j--)
    {
      printf(" ");
    }
    for (j = 0; j < i + 1; j++)
    {
      printf("%c ", ch);
    }
    printf("\n");
  }
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < i + 1; j++)
    {
      printf(" ");
    }
    for (j = n - 1; j > i; j--)
    {
      printf("%c ", ch);
    }
    printf("\n");
  }

  printf("\n");

  //     *
  //    * *
  //   *   *
  //  *     *
  // *       *
  //  *     *
  //   *   *
  //    * *
  //     *
  for (i = 0; i < n; i++)
  {
    for (j = n - 1; j > i; j--)
    {
      printf(" ");
    }
    for (j = 0; j < i + 1; j++)
    {
      if (j == 0 || j == i)
      {
        printf("%c ", ch);
      }
      else
      {
        printf("  ");
      }
    }
    printf("\n");
  }
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < i + 1; j++)
    {
      printf(" ");
    }
    for (j = n - 1; j > i; j--)
    {
      if (j == n - 1 || j == i + 1)
      {
        printf("%c ", ch);
      }
      else
      {
        printf("  ");
      }
    }
    printf("\n");
  }

  printf("\n");

  return 0;
}
