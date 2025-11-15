#include <stdio.h>
int main() {
    int n, i;
    int max, min;
    printf("Enter the number of scores: ");
    scanf("%d", &n);
     int scores[n];
    printf("Enter %d scores:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }
    max = min = scores[0];
    for (i = 1; i < n; i++) {
        if (scores[i] > max)
            max = scores[i];
        if (scores[i] < min)
            min = scores[i];
    }
    printf("\nMaximum score = %d", max);
    printf("\nMinimum score = %d", min);
    return 0;
}