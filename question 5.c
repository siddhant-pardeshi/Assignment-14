//Write a program to find the smallest number stored in an array of size 10. Take array values from the user.

#include<stdio.h>

int main()
{
int a[10],i,min;

printf("Enter 10 number to calculate sum :");
for(i=0;i<10;i++)
   scanf("%d",&a[i]);

min = a[0];
    for(i=0;i<10;i++)
{
      if (min>a[i])
      min = a[i];
}
printf("Smallest Number stored int the array is %d",min);

return 0;
}

