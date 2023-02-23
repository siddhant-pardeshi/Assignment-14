//Write a program to calculate the average of numbers stored in an array of size 10. Take array values from the user.

#include<stdio.h>

int main()
{
int a[10],i,sum=0;

printf("Enter 10 number to calculate average :");
for(i=0;i<10;i++)
   scanf("%d",&a[i]);

for(i=0;i<10;i++)
{
sum = a[i] + sum;
}
printf("average of numbers stored in array are %d",sum/10);

return 0;
}
