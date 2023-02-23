//Write a program in C to read n number of values in an array and display it in reverse. Take array values from the user.

#include<stdio.h>

int main()
{
int a[10],i;

printf("Enter 10 numbers :");
for(i=0;i<10;i++)
   scanf("%d",&a[i]);

printf("Numbers in reverse order are :");
for(i=9;i>=0;i--)
{
printf("%d\n",a[i]);
}

return 0;
}
