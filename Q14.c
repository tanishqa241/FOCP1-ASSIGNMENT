/* Develop a C program to count the number of prime numbers in an array */
#include<stdio.h>
int main()
{
    int n,factors,count=0;
    printf("enter number of entries");
    scanf("%d",&n);
  
    int arr[n];
    printf("enter the entries");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        factors=0;
        for(int j=1;j<=arr[i];j++)
    {
        if(arr[i]%j==0)
        {
           factors++;
        }
    }
    if(factors==2)
    {
      count++;
    }
    }
    printf("the number of prime numbers in the array = %d",count);

    return 0;
}