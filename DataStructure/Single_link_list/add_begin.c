#include <stdio.h>
#include <stdlib.h>

typedef struct node 
{
int data;
struct node *next;
}ST;
void add_begin(ST **);
void print(ST *);

int main()
{
ST *hptr=NULL;
char ch;
do{
add_begin(&hptr);
printf("Do you want to continue Y/N \n");
scanf(" %c", &ch);
}
while (ch=='Y' | ch =='y');
print(hptr);
}

void add_begin(ST **ptr)
{
//ST **ptr=NULL;
ST *new=(ST*)malloc(sizeof(ST)); 
printf("Enter the data \n");
scanf("%d",&new->data);
new->next=*ptr;
*ptr = new;
}
void print(ST* pt)
{
while(pt)
{
printf(" %d",pt->data);
pt=pt->next;
}
} 

