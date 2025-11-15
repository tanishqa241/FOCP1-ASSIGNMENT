#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nPeak element(s):\n");
    if (n == 1) {
        printf("%d at position 1\n", arr[0]);
        return 0;
    }
    if (arr[0] >= arr[1]) {
        printf("%d at position 1\n", arr[0]);
    }
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
            printf("%d at position %d\n", arr[i], i + 1);
        }
    }
    if (arr[n - 1] >= arr[n - 2]) {
        printf("%d at position %d\n", arr[n - 1], n);
    }

    return 0;
}