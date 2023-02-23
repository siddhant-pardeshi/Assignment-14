// Write a program to find second largest in an array.Take array values from the user

#include <stdio.h>
 int main()
 {
 int a[10],i,max1=0,max2=0;

printf("Enter 10 numbers :");

for(i=0;i<10;i++)
   scanf("%d",&a[i]);

for(i=0;i<10;i++)
{
    if (a[i] > max1)
    {
       max2 = max1;
       max1 = a[i];

    }
    else if (a[i] > max2)
    {
       max2 = a[i];

    }
} printf("Second largest element in the array is %d",max2);

    return 0;
 }
