/*Implement a C program to insert an element at the front, middle, or end of an array, and print
the array before and after insertion*/
#include <stdio.h>

int main() {
    int arr[100], n, pos, choice, value;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nArray before insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\nWhere do you want to insert the element?\n");
    printf("1. At the beginning\n2. In the middle\n3. At the end\n");
    printf("Enter your choice (1/2/3): ");
    scanf("%d", &choice);
    printf("Enter the element to insert: ");
    scanf("%d", &value);

    switch (choice) {
        case 1: 
            pos = 0;
            break;

        case 2: 
            pos = n / 2;
            break;

        case 3: 
            pos = n;
            break;

        default:
            printf("Invalid choice!\n");
            return 0;
    }
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    n++; 
    printf("\nArray after insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}