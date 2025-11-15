/*Design a C program to delete an element from the front, middle, or end of an array, and print
the array before and after deletion.*/
#include <stdio.h>

int main() {
    int arr[100], n, pos, choice;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nArray before deletion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\nWhere do you want to delete an element?\n");
    printf("1. From the beginning\n2. From the middle\n3. From the end\n");
    printf("Enter your choice (1/2/3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: 
            pos = 0;
            break;

        case 2: 
            pos = n / 2;
            break;

        case 3:
            pos = n - 1;
            break;

        default:
            printf("Invalid choice!\n");
            return 0;
    }
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--; 
    printf("\nArray after deletion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}