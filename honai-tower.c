#include <stdio.h>

// Function to move pegs in the Tower of Hanoi
// Parameters:
//   num: Number of pegs to move
//   from: Source peg
//   to: Destination peg
//   aux: Auxiliary peg
void swap(int num, char from, char to, char aux) {
    // Base case: If there's only one peg, move it directly from 'from' to 'to'
    if (num == 1) {
        printf("Move peg 1 from %c to %c\n", from, to);
        return;
    } else {
        // Move (num-1) pegs from 'from' to 'aux', using 'to' as auxiliary
        swap(num - 1, from, aux, to);

        // Move the current peg (num) from 'from' to 'to'
        printf("Move peg %d from %c to %c\n", num, from, to);

        // Move (num-1) pegs from 'aux' to 'to', using 'from' as auxiliary
        swap(num - 1, aux, to, from);
    }
}

int main() {
    int num;
    printf("Enter the number of pegs: ");
    scanf("%d", &num);

    // Call the Tower of Hanoi function
    swap(num, 'A', 'B', 'C');

    return 0;
}
