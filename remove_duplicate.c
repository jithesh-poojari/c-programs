#include <stdio.h>

int main() {
    int array[10];
    int len, temp;
    printf("Enter the length of the array (max 10):\n");
    scanf("%d", &len);
    
    if (len > 10 || len < 1) {
        printf("Invalid array length. Please enter a value between 1 and 10.\n");
        return 1;
    }
    
    printf("Enter %d numbers:\n", len);
    
    for(int i = 0; i < len; i++) {
        scanf("%d", &array[i]);
    }
    
    for(int i = 0; i < len - 1; i++) {
        for(int j = 0; j < len - i - 1; j++) {
            if(array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    
    int newSize = 0;
    for(int i = 0; i < len; i++) {
        int isDuplicate = 0;
        for(int j = i + 1; j < len; j++) {
            if(array[i] == array[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            array[newSize++] = array[i];
        }
    }
    
    printf("Array without duplicates:\n");
    for(int i = 0; i < newSize; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    return 0;
}
