// Reverse the data of a single link list.

#include <iostream>
using namespace std;

class Node 
{
public:
	int data;
	Node *next;
};

Node * add_end(Node *head,int new_data)
{
	Node * new_node = new Node();
	new_node->data = new_data;
	new_node->next = NULL;

	if(head == NULL)
	{
		head = new_node;
	}
	else
	{
		Node *temp = head;
		while(temp->next)
		{
			temp = temp->next;
		}
		temp->next = new_node;

	}
	return head;
}

void print(Node *head)
{
	while(head)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout <<endl;
}

void print_reverse(Node *ptr)
{
	if (ptr)
	{
		print_reverse(ptr->next);
		cout << ptr->data << " ";
	}
	//cout << endl;
}

int  count_length(Node *ptr)
{
	int c = 0;
	while(ptr)
	{
		c++;
		ptr = ptr->next;
	}
	cout << c <<endl;
	return c;
}

void print_reverse_loop(Node *head)
{
	Node *p;
	int i,j,c;
	c = count_length(head);
	for(i=0;i<c;i++)
	{
		p = head;
		for (j=0;j<c-1-i;j++)
		{
			p = p->next;
		}
		cout <<p->data << " ";
	}
	cout << endl;
} 



 void reverse_the_data(Node* head_ptr)
 {
 	Node *p,*q;
 	int temp;
 	int i,j,c;
 	c = count_length(head_ptr);
 	p = head_ptr;
 	for(i=0;i<c/2;i++)
 	{
 		q=head_ptr;
 		for(j=0;j<c-1-i;j++)
 			q=q->next;

 		temp = p->data;
 		p->data = q->data;
 		q->data = temp;

 		p = p->next;

 	}
	
 }



int main()
{
	Node *hptr = NULL;
	int c;
	Node *hptr1,*hptr2,*hptr3,*hptr4,*hptr5;
	hptr1 = add_end(hptr,1);
	hptr2 = add_end(hptr1,2);
	hptr3 = add_end(hptr2,3);
	hptr4 = add_end(hptr3,4);
	hptr5 = add_end(hptr4,5);
	c = count_length(hptr5);
	print(hptr5);
	//print_reverse(hptr5);
	//reverse_the_data(hptr5);
	//print(hptr5);
	print_reverse_loop(hptr5);
}