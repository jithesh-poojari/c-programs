#include <stdio.h>

int main() {
    int i, j, n = 5;
    char ch = '*';

    // Hollow patterns
    printf("Hollow Patterns:\n\n");

    // 1. Hollow Square
    printf("1. Hollow Square:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                printf("%c  ", ch);
            } else {
                printf("   ");
            }
        }
        printf("\n");
    }
    printf("\n");

    // 2. Hollow Right Triangle
    printf("2. Hollow Right Triangle:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < i + 1; j++) {
            if (i == n - 1 || j == 0 || j == i) {
                printf("%c  ", ch);
            } else {
                printf("   ");
            }
        }
        printf("\n");
    }
    printf("\n");

    // 3. Hollow Inverted Right Triangle
    printf("3. Hollow Inverted Right Triangle:\n");
    for (i = 0; i < n; i++) {
        for (j = n; j > i; j--) {
            if (i == 0 || j == n || j == i + 1) {
                printf("%c  ", ch);
            } else {
                printf("   ");
            }
        }
        printf("\n");
    }
    printf("\n");

    // 4. Hollow Right Aligned Triangle
    printf("4. Hollow Right Aligned Triangle:\n");
    for (i = 0; i < n; i++) {
        for (j = n - 1; j > i; j--) {
            printf("   ");
        }
        for (j = 0; j < i + 1; j++) {
            if (i == n - 1 || j == 0 || j == i) {
                printf("%c  ", ch);
            } else {
                printf("   ");
            }
        }
        printf("\n");
    }
    printf("\n");

    // 5. Hollow Right Aligned Inverted Triangle
    printf("5. Hollow Right Aligned Inverted Triangle:\n");
    for (i = 0; i < n; i++) {
        for (j = 1; j < i + 1; j++) {
            printf("   ");
        }
        for (j = n; j > i; j--) {
            if (i == 0 || j == n || j == i + 1) {
                printf("%c  ", ch);
            } else {
                printf("   ");
            }
        }
        printf("\n");
    }
    printf("\n");
    
    // 6. Hollow Right Pascal Triangle
    printf("6. Hollow Right Pascal Triangle:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < i + 1; j++) {
           if ( j == 0 || j == i) {
                printf("%c  ", ch);
            } else {
                printf("   ");
            }
        }
        printf("\n");
    }
    for (i = 0; i < n; i++) {
        for (j = n; j > i+1; j--) {
            if ( j == n || j == i + 2) {
                printf("%c  ", ch);
            } else {
                printf("   ");
            }
        }
        printf("\n");
    }
    printf("\n");
    
    // 7. Hollow Left Pascal Triangle
    printf("7. Hollow Left Pascal Triangle:\n");
    for (i = 0; i < n; i++) {
        for (j = n - 1; j > i; j--) {
            printf("   ");
        }
        for (j = 0; j < i + 1; j++) {
            if ( j == 0 || j == i) {
                printf("%c  ", ch);
            } else {
                printf("   ");
            }
        }
        printf("\n");
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < i + 1; j++) {
            printf("   ");
        }
        for (j = n; j > i+1; j--) {
            if ( j == n || j == i + 2) {
                printf("%c  ", ch);
            } else {
                printf("   ");
            }
        }
        printf("\n");
    }
    printf("\n");
    
    // 8. Hollow Equilateral Triangle
    printf("8. Hollow Equilateral Triangle:\n");
    for (i = 0; i < n; i++) {
        for (j = n - 1; j > i; j--) {
            printf(" ");
        }
        for (j = 0; j < (i + 1); j++) {
          if (i == n - 1 || j == 0 || j == i) {
                printf("%c ", ch);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");
    
    // 9. Hollow Inverted Equilateral Triangle
    printf("9. Hollow Inverted Equilateral Triangle:\n");
    for (i = n - 1; i >= 0; i--) {
        for (j = n - 1; j > i; j--) {
            printf(" ");
        }
        for (j = 0; j < (i + 1); j++) {
             if (j == 0 || i == n - 1 || j == i ) {
                printf("%c ", ch);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");
    
    // 10. Hollow Pyramid
    printf("10. Hollow Pyramid:\n");
    for (i = 0; i < n; i++) {
        for (j = n - 1; j > i; j--) {
            printf(" ");
        }
        for (j = 0; j < (2 * i + 1); j++) {
            if (i == n - 1 || j == 0 || j == i * 2 ) {
                printf("%c", ch);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");

    // 11. Hollow Inverted Pyramid
    printf("11. Hollow Inverted Pyramid:\n");
    for (i = n; i > 0; i--) {
        for (j = n - i; j > 0; j--) {
            printf(" ");
        }
        for (j = 0; j < (2 * i - 1); j++) {
            if (j == 0 || i == n  || j == (i-1) * 2 ) {
                printf("%c", ch);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");

    // 12. Hollow Diamond
    printf("12. Hollow Diamond:\n");
    for (i = 0; i < n; i++) {
        for (j = n - 1; j > i; j--) {
            printf(" ");
        }
        for (j = 0; j < i + 1; j++) {
            if (j == 0 || j == i) {
                printf("%c ", ch);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < i + 1; j++) {
            printf(" ");
        }
        for (j = n - 1; j > i; j--) {
            if (j == n - 1 || j == i + 1) {
                printf("%c ", ch);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");
    
    // 13. Hollow Hourglass
    printf("13. Hollow Hourglass:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) {
            printf(" ");
        }
        for (j = 0; j < (n - i) ; j++) {
            if (j == 0 || i == 0  || j ==  n - i - 1) {
                printf("%c ", ch);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    for (i = 1; i < n; i++) {
        for (j = n - 1; j > i; j--) {
            printf(" ");
        }
        for (j = 0; j < (i + 1); j++) {
           if (i == n - 1 || j == 0 || j == i) {
                printf("%c ", ch);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");
    
    // 14. Hollow Rhombus
    printf("14. Hollow Rhombus:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        for (j = 0; j < n; j++) {
            if (i == n - 1 || i == 0 || j == 0 || j == n - 1) {
                printf("%c ", ch);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");
    
    // 15. Hollow Parallelogram
    printf("15. Hollow Parallelogram:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) {
            printf(" ");
        }
        for (j = 0; j < n * 2; j++) {
            if (i == n - 1 || i == 0 || j == 0 || j == n * 2 - 1) {
                printf("%c ", ch);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");
    
    // 16. Hollow Hexagon
    printf("16. Hollow Hexagon:\n");
    for (i = 0; i < n / 2; i++) {
        for (j = n / 2 - i; j > 0; j--) {
            printf(" ");
        }
        for (j = 0; j < n + 1 * i; j++) {
             if ( i == 0 || j == 0 || j == n * i) {
                printf("%c ", ch);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    for (i = n / 2; i >= 0; i--) {
        for (j = 0; j < n / 2 - i; j++) {
            printf(" ");
        }
        for (j = 0; j < n + i; j++) {
            if (i == n - 1 || i == 0 || j == 0 || j == n + i - 1) {
                printf("%c ", ch);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");
    
    // 17. Hollow Pentagon
    printf("17. Hollow Pentagon:\n");
      for (i = 0; i < n+1; i++) {
        for (j = n ; j > i; j--) {
            printf(" ");
        }
        for (j = 0; j < (i + 1); j++) {
            if ( j == 0 || i == 0 || j == i ) {
                printf(" %c", ch);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    for (i = n / 2; i >= 0; i--) {
        for (j = 0; j < n / 2 - i; j++) {
            printf(" ");
        }
        for (j = 0; j < n +  i; j++) {
            if (i == n - 1 || i == 0 || j == 0 || j == n + i - 1) {
                printf("%c ", ch);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");
    
    // 18. Hollow Inverted Pentagon
    printf("18. Hollow Inverted Pentagon:\n");
    for (int i = 0; i <= n / 2; i++) {
        for (int j = 0; j < n / 2 - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < n + i; j++) {
           if (i == n - 1 || i == 0 || j == 0 || j == n + i - 1) {
                printf("%c ", ch);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
     for (int i = n + 1; i > 0; i--) {
        for (int j = n + 2; j > i; j--) {
            printf(" ");
        }
        for (int j = 0; j < i; j++) {
            if ( j == 0 || j == i - 1) {
                printf("%c ", ch);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
