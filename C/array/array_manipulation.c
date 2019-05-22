#include <stdio.h>
#include <string.h>

int main()
{
char array[200]="My name is Brijesh";
char subArray[4]="@345";
int count=0;

int length1 = strlen(array);
int length2 = strlen(subArray);
int length3;
printf("array=%d subArray=%d",length1,length2);
for (int i=0;array[i];i++)
{
if (array[i] == ' ')
count++;
}
length3 = length1+count*length2;

for 


