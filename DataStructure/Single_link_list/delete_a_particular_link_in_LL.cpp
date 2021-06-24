// Delete a particular link in a link list.

#include <iostream>
using namespace std;

class Node 
{
public:
	int data;
	Node *next;
};

Node * add_end(Node *head_ptr,int new_data)
{
	Node *new_node = new Node();
	new_node->data = new_data;
	new_node->next = NULL;
	if (head_ptr == NULL)
	{
		head_ptr = new_node;
	}
	else
	{
		Node *temp = head_ptr;
		while(temp->next)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}
	return head_ptr;
}

void print_node(Node *ptr)
{
	while(ptr)
	{
		cout <<ptr->data << " ";
		ptr = ptr->next;

	}
	cout <<endl;
}

void delete_particular_node(Node ** head,int n)
{
	Node *prv,*curr;
	curr = *head;
	while(curr)
	{
		if (curr->data == n)
		{
			if (curr == *head)
			{
				*head = curr->next;
				delete(curr);
				curr = NULL;
				return;
			}
			else
			{
				prv->next = curr->next;
				delete(curr);
				curr = NULL;
				return; 
			}
		}
		prv = curr;
		curr = curr->next;
	}

}

void delete_all_node(Node **curr)
{
	Node *temp;

	while (*curr)
	{
		temp = *curr;
		*curr = (*curr)->next;
		delete temp;
		temp=NULL;

	}
}

int main()
{
	Node *hptr = NULL;
	Node *hptr1, *hptr2, *hptr3,*hptr4,*hptr5;
	hptr1 = add_end(hptr,1);
	hptr2 = add_end(hptr1,2);
	hptr3 = add_end(hptr2,3);
	hptr4 = add_end(hptr3,4);
	hptr5 = add_end(hptr4,5);
	print_node(hptr5);
	//delete_particular_node(&hptr5,2);
	//print_node(hptr5);
	delete_all_node(&hptr5);
	print_node(hptr5);
}