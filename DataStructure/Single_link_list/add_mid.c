#include <stdio.h>
#include <stdlib.h>
typedef struct node 
{
int data;
struct node *next;
} ST;
void add_mid(ST **);
void print(ST *);

int main()
{
ST *hptr = NULL;
char ch;
do 
{
add_mid(&hptr);
printf ("Do you want to continue Y/N \n");
scanf (" %c",&ch);
}
while( ch == 'Y' || ch == 'y');
print(hptr);
}

void add_mid(ST **ptr)
{
ST *new = (ST *)malloc(sizeof(ST));
printf ("enter the data \n");
scanf ("%d",&new->data);

if ((*ptr == NULL) || (new->data)<(*ptr)->data)
{
new->next = *ptr;
*ptr = new;
}
else 
{
ST *temp = *ptr;
while((temp->next) && (temp->next->data > (*ptr)->data))
temp=temp->next;
new->next = temp->next;
temp->next = new;
}
}
void print(ST *pt)
{
while(pt)
{
printf("%d ",pt->data);
pt=pt->next;
}
}  

