/* Develop a program to identify and print duplicate elements in an array, or print “-1” if no
duplicates exist, applying frequency detection and data validation.
Examples:
Input: {2, 10,10, 100, 2, 10, 11,2,11,2}
Output: 2 10 11
Input: {5, 40, 1, 40, 100000, 1, 5, 1}
Output: 5 40 1*/
#include <stdio.h>
int main() {
    int arr[100], n;
    int freq[100] = {0};
    int found = 0;       
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    if (n <= 0 || n > 100) {
        printf("Invalid array size!\n");
        return 0;
    }
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        if (freq[i] == -1)  
            continue;

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = -1;
            }
        }
        if (count > 1) {
            printf("%d ", arr[i]);
            found = 1;
        }
    }
    if (!found)
        printf("-1");

    printf("\n");
    return 0;
}