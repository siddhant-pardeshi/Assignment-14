//Write a program to find the second smallest number in an array.Take array values

#include <stdio.h>
 int main()
 {
 int a[10],i,min1,min2;

printf("Enter 10 numbers :");

for(i=0;i<10;i++)
   scanf("%d",&a[i]);

min1=min2=a[0];

for(i=0;i<10;i++)
{
    if (a[i] < min1)
    {
       min2 = min1;
       min1 = a[i];

    }
    else if (a[i] < min2)
    {
       min2 = a[i];

    }
} printf("Second smallest element in the array is %d",min2);

    return 0;
 }

