#include <stdio.h>
#include <string.h>
int main()
{
int  num,r,arr[100],l;
int i=1;
long long sum = 0;
printf("Enter the number\n");
scanf ("%d",&num);

while (num)
{
r=num%2;
sum =sum +r*i;
num=num/2;
i=i*10;
}
printf ("%lld",sum);
}
