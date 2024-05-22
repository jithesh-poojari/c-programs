#include <stdio.h>

int main() {
    int i, j, n = 5;
    char ch = '*';

    // Filled patterns
    printf("Filled Patterns:\n\n");

    // 1. Filled Square
    printf("1. Filled Square:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%c  ", ch);
        }
        printf("\n");
    }
    printf("\n");

    // 2. Filled Right Triangle
    printf("2. Filled Right Triangle:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            printf("%c  ", ch);
        }
        printf("\n");
    }
    printf("\n");

    // 3. Filled Inverted Right Triangle
    printf("3. Filled Inverted Right Triangle:\n");
    for (i = 0; i < n; i++) {
        for (j = n; j > i; j--) {
            printf("%c  ", ch);
        }
        printf("\n");
    }
    printf("\n");

    // 4. Filled Right Aligned Triangle
    printf("4. Filled Right Aligned Triangle:\n");
    for (i = 0; i < n; i++) {
        for (j = n - 1; j > i; j--) {
            printf("   ");
        }
        for (j = 0; j <= i; j++) {
            printf("%c  ", ch);
        }
        printf("\n");
    }
    printf("\n");

    // 5. Filled Right Aligned Inverted Triangle
    printf("5. Filled Right Aligned Inverted Triangle:\n");
    for (i = 0; i < n; i++) {
        for (j = 1; j <= i; j++) {
            printf("   ");
        }
        for (j = n; j > i; j--) {
            printf("%c  ", ch);
        }
        printf("\n");
    }
    printf("\n");

    // 6. Filled Right Pascal Triangle
    printf("6. Filled Right Pascal Triangle:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < i + 1; j++) {
            printf("%c  ", ch);
        }
        printf("\n");
    }
    for (i = 0; i < n; i++) {
        for (j = n; j > i + 1; j--) {
            printf("%c  ", ch);
        }
        printf("\n");
    }
    printf("\n");

    // 7. Filled Left Pascal Triangle
    printf("7. Filled Left Pascal Triangle:\n");
    for (i = 0; i < n; i++) {
        for (j = n - 1; j > i; j--) {
            printf("   ");
        }
        for (j = 0; j < i + 1; j++) {
            printf("%c  ", ch);
        }
        printf("\n");
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < i + 1; j++) {
            printf("   ");
        }
        for (j = n - 1; j > i; j--) {
            printf("%c  ", ch);
        }
        printf("\n");
    }
    printf("\n");

    // 8. Filled Equilateral Triangle
    printf("8. Filled Equilateral Triangle:\n");
    for (i = 0; i < n; i++) {
        for (j = n - 1; j > i; j--) {
            printf(" ");
        }
        for (j = 0; j <= i; j++) {
            printf("%c ", ch);
        }
        printf("\n");
    }
    printf("\n");

    // 9. Filled Inverted Equilateral Triangle
    printf("9. Filled Inverted Equilateral Triangle:\n");
    for (i = n - 1; i >= 0; i--) {
        for (j = n - 1; j > i; j--) {
            printf(" ");
        }
        for (j = 0; j <= i; j++) {
            printf("%c ", ch);
        }
        printf("\n");
    }
    printf("\n");

    // 10. Filled Pyramid
    printf("10. Filled Pyramid:\n");
    for (i = 0; i < n; i++) {
        for (j = n - 1; j > i; j--) {
            printf(" ");
        }
        for (j = 0; j < (2 * i + 1); j++) {
            printf("%c", ch);
        }
        printf("\n");
    }
    printf("\n");

    // 11. Filled Inverted Pyramid
    printf("11. Filled Inverted Pyramid:\n");
    for (i = n; i > 0; i--) {
        for (j = n - i; j > 0; j--) {
            printf(" ");
        }
        for (j = 0; j < (2 * i - 1); j++) {
            printf("%c", ch);
        }
        printf("\n");
    }
    printf("\n");

    // 12. Filled Diamond
    printf("12. Filled Diamond:\n");
    for (i = 0; i < n; i++) {
        for (j = n - 1; j > i; j--) {
            printf(" ");
        }
        for (j = 0; j <= i; j++) {
            printf("%c ", ch);
        }
        printf("\n");
    }
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j <= i; j++) {
            printf(" ");
        }
        for (j = n - 1; j > i; j--) {
            printf("%c ", ch);
        }
        printf("\n");
    }
    printf("\n");

    // 13. Filled Hourglass
    printf("13. Filled Hourglass:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) {
            printf(" ");
        }
        for (j = 0; j < (n - i); j++) {
            printf("%c ", ch);
        }
        printf("\n");
    }
    for (i = 1; i < n; i++) {
        for (j = n - 1; j > i; j--) {
            printf(" ");
        }
        for (j = 0; j <= i; j++) {
            printf("%c ", ch);
        }
        printf("\n");
    }
    printf("\n");

    // 14. Filled Rhombus
    printf("14. Filled Rhombus:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        for (j = 0; j < n; j++) {
            printf("%c ", ch);
        }
        printf("\n");
    }
    printf("\n");

    // 15. Filled Parallelogram
    printf("15. Filled Parallelogram:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) {
            printf(" ");
        }
        for (j = 0; j < n * 2; j++) {
            printf("%c ", ch);
        }
        printf("\n");
    }
    printf("\n");

    // 16. Filled Hexagon
    printf("16. Filled Hexagon:\n");
    for (i = 0; i < n / 2; i++) {
        for (j = n / 2 - i; j > 0; j--) {
            printf(" ");
        }
        for (j = 0; j < n + 1 * i; j++) {
            printf("%c ", ch);
        }
        printf("\n");
    }
    for (i = n / 2; i >= 0; i--) {
        for (j = 0; j < n / 2 - i; j++) {
            printf(" ");
        }
        for (j = 0; j < n + i; j++) {
            printf("%c ", ch);
        }
        printf("\n");
    }
    printf("\n");

    // 17. Filled Pentagon
    printf("17. Filled Pentagon:\n");
    for (i = 0; i < n + 1; i++) {
        for (j = n; j > i; j--) {
            printf(" ");
        }
        for (j = 0; j < (i + 1); j++) {
            printf(" %c", ch);
        }
        printf("\n");
    }
    for (i = n / 2; i >= 0; i--) {
        for (j = 0; j < n / 2 - i; j++) {
            printf(" ");
        }
        for (j = 0; j < n + i; j++) {
            printf("%c ", ch);
        }
        printf("\n");
    }
    printf("\n");

    // 18. Filled Inverted Pentagon
    printf("18. Filled Inverted Pentagon:\n");
    for (i = 0; i <= n / 2; i++) {
        for (j = 0; j < n / 2 - i; j++) {
            printf(" ");
        }
        for (j = 0; j < n + i; j++) {
            printf("%c ", ch);
        }
        printf("\n");
    }
    for (i = n + 1; i > 0; i--) {
        for (j = n + 2; j > i; j--) {
            printf(" ");
        }
        for (j = 0; j < i; j++) {
            printf("%c ", ch);
        }
        printf("\n");
    }

    return 0;
}

