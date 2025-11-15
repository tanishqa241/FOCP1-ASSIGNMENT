/*Design a C program to subtract two integers without using the minus (-) operator, applying
bitwise operators. Highlight how such logic can be used in low-level arithmetic operations in
embedded systems or processors.*/
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter integers a: ");
    scanf("%d",&a);
    printf("Enter integer b: ");
    scanf("%d",&b);
    while (b != 0) {
        int borrow = (~a) & b;
        a = a ^ b;
        b = borrow << 1;
    }
   printf("Result: %d\n", a);
   return 0;
}