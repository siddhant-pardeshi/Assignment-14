//Write a program to calculate the sum of all even numbers and sum of all odd numbers, which are stored in an array of size 10. Take array values from the user.

#include<stdio.h>

int main()
{
int a[10],i,evensum=0,oddsum=0;

printf("Enter 10 number to calculate sum :");
for(i=0;i<10;i++)
   scanf("%d",&a[i]);

for(i=0;i<10;i++)
{
if(a[i]%2==0)
evensum = a[i] + evensum;

else
oddsum = a[i] + oddsum;
}
printf("Sum of Even numbers stored in Array are %d\n",evensum);

printf("Sum of Odd numbers stored in Array are %d\n",oddsum);


return 0;
}
