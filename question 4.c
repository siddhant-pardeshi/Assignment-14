//Write a program to find the greatest number stored in an array of size 10. Take array values from the user.

#include<stdio.h>

int main()
{
int a[10],i,max;

printf("Enter 10 number to calculate sum :");
for(i=0;i<10;i++)
   scanf("%d",&a[i]);

max = a[0];
    for(i=0;i<10;i++)
{
      if (max<a[i])
      max = a[i];
}
printf("Greatest Number stored int the array is %d",max);

return 0;
}



