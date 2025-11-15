/*Develop a C program to generate the Fibonacci series up to ‘n’ terms,
where each term is the sum of the two preceding ones.
0, 1, 1, 2, 3, 5, 8, 13, ...
*/
#include<stdio.h>
int main(){
    int n,a=0,b=1,c;
    printf("Enter till where you want to print the series:");
    scanf("%d",&n);
    printf("Fibanicco series");
    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
 return 0;
}

