#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
int data ;
struct node *next;
}ST;
void add_end(ST **);
void print(ST *);

int main()
{
ST *hptr =NULL;
char ch;
do {
add_end(&hptr);
printf ("Do you want to continue Y/N \n");
scanf (" %c",&ch);
}
while(ch == 'Y' | ch =='y');
print(hptr);
}

void add_end(ST **ptr)
{
ST *new = (ST *)malloc(sizeof(ST));
printf ("Enter the data \n");
scanf (" %d",&new->data);
if (*ptr == NULL)
{
new->next = *ptr;
*ptr = new;
}
else
{
ST *temp = *ptr;
while (temp->next)
temp=temp->next;
new->next=temp->next;
temp->next=new;
}
}

void print(ST *pt)
{
while(pt)
{
printf("%d",pt->data);
pt=pt->next;
}
}
