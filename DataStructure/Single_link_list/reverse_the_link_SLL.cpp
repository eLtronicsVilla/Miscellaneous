// Reverse the link in single link list.

#include <iostream>
using namespace std;

class Node 
{
public:
	int data;
	Node *next;
};

Node * add_end(Node *head, int data_new)
{
	Node *new_node = new Node();
	new_node->data = data_new;
	new_node->next = NULL;
	if(head==NULL)
		head = new_node;
	else
	{
		Node *temp = head;
		while(temp->next)
			temp = temp->next;
		temp->next = new_node;
	}
	return head;
}

void print_node(Node *head)
{
	while(head)
	{
		cout <<head->data << " ";
		head = head->next;
	}
	cout <<endl;
}

Node * reverse_link(Node **head_ptr)
{
	Node *p,*q,*temp;
	p = *head_ptr;
	q = NULL;
	while(p)
	{
		temp = q;
		q = p;
		p = p->next;
		q->next = temp;

	}
	*head_ptr = q;

	return *head_ptr;
}

int main()
{
	Node *hptr = NULL;
	Node *hptr1,*hptr2,*hptr3,*hptr4,*hptr5,*hptr6;
	hptr1 = add_end(hptr,1);
	hptr2 = add_end(hptr1,2);
	hptr3 = add_end(hptr2,3);
	hptr4 = add_end(hptr3,4);
	hptr5 = add_end(hptr4,5);
	print_node(hptr5);
	hptr6 = reverse_link(&hptr5);
	print_node(hptr6);
}