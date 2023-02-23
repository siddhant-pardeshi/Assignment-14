//Write a program to sort elements of an array of size 10. Take array values from the use.

#include<stdio.h>

int main()
{
int a[10],i,j,temp=0;

printf("Enter 10 number to sort :");
for(i=0;i<10;i++)
   scanf("%d",&a[i]);

   for(i=0;i<9;i++)
{
    for(j=i+1;j<10;j++)
    {
     if (a[i] > a[j])
     {
      temp = a[i];
      a[i] = a[j];
      a[j] = temp;
     }
    }
}
printf("Sorted array is as follows:");
for(i=0;i<10;i++)
{
printf("%d\n",a[i]);
}
return 0;
}
