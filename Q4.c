/* Implement a C program to swap two numbers using four different methods, demonstrating
diverse approaches such as arithmetic, bitwise XOR, pointer manipulation, and temporary variable
usage — a key skill in memory and variable management*/
#include<stdio.h>
int main()
{
    int a,b,copy1,copy2;
    printf("enter value of a and b:");
    scanf("%d %d",&a,&b);
    copy1=a;
    copy2=b;
  a=a+b;
  b=a-b;
  a=a-b;
  printf("swapping using arithmatic operator: a=%d , b=%d",a,b);
  a=copy1;
  b=copy2;
  void swapWithXOR(int a, int b); {
    a = a ^ b;  
    b = a ^ b;  
    a = a ^ b;  
    printf("\nUsing Bitwise XOR: a = %d , b = %d", a, b);
}
  a=copy1;
  b=copy2;
  int* aptr=&a;
  int* bptr=&b;
  int* swap;
  swap=aptr;
  aptr=bptr;
  bptr=swap;
  printf("\nswapping using pointers: a=%d , b=%d",*aptr,*bptr);
  a=copy1;
  b=copy2;
  int temp;
  temp=a;
  a=b;
  b=temp;
  printf("\nswapping using temporary variable: a=%d , b=%d",a,b);
  return 0;
}