/*Construct a C program to find the HCF (Highest Common Factor) of two integers using
iterative or recursive logic — a core operation in optimisation algorithms and cryptographic
computations*/
#include<stdio.h>
int main() {
    int a, b, hcf;
    printf("Enter first integers: ");
    scanf("%d",&a);
    printf("Enter second integers: ");
    scanf("%d",&b);
    for(int i = 1; i<= a && i<= b; i++) {
        if(a % i == 0 && b % i == 0)
            hcf = i;
    }
    printf("HCF of %d and %d = %d", a, b, hcf);
    return 0;
}
