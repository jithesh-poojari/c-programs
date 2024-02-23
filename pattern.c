// A program to reverse a number and find the sum of individual digits. Also to check for palindrome.
#include <stdio.h>

int main()
{
  int i, j, n = 5;

  // *  *  *  *  *
  // *  *  *  *  *
  // *  *  *  *  *
  // *  *  *  *  *
  // *  *  *  *  *
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      printf("*  ");
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
      printf("*  ");
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
      printf("*  ");
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
      printf("*  ");
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
      printf("*  ");
    }
    printf("\n");
  }

  //Enter the number of rows: 10
//          *
//         * *
//       *   *
//       *     *
//      *       *
//     *         *
//   *           *
//   *             *
//  *               *
// *******************
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        for(int k = 1; k <= 2 * i - 1; k++) {
            if(k == 1 || k == 2 * i - 1 || i == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        
        printf("\n");
    }

  return 0;
}
