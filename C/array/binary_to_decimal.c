#include <stdio.h>
#include <math.h>
int main()
{
int num,r,sum=0,i=0;
printf ("Enter the binary number\n");
scanf ("%d", &num);
while (num)
{
r = num%10;
sum = sum + r*pow(2,i);
num = num /10;
i++;
}

printf("%d",sum);
}  
