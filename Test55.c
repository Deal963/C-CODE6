// Read and print elements of a one-dimensional array.

#include <stdio.h>

int main() {
    int arr[5];
    for(int i = 0; i < 5; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("The elements in the array are:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

    
