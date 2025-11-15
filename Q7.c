/*Develop a C program to print a binary pyramid pattern.
0 0
01 01
010 010
0101 0101
0101001010 */
#include <stdio.h>

int main() {
    int  i, j, k;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", (j+1) % 2);  
        }
        for (k = 1; k <= 2 * (5 - i); k++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("%d", (j+1)% 2);
        }
        printf("\n");
    }
    return 0;
}