#include <stdio.h>
#pragma pack(1)
struct student 
{
int roll;
char name[10];
float marks;
} ;

int main()
{
struct student s1;
printf ("sizeof ST for s1 = %ld",sizeof(s1));
printf ("sizeof rollno = %ld name = %ld for marks = %ld",sizeof(s1.roll),sizeof(s1.name),sizeof(s1.marks));
}
