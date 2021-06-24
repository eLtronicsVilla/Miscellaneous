// delete duplicate node from sorted single link list


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

void print_node(Node *head)
{
	while(head)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout <<endl;
}

void remove_duplicate_node(Node * head)
{
	Node *temp = head; // temp pointer to traverse the link list.
	Node *temp2;
	if(temp = NULL)
		return ;
	while(temp->next)
	{
		if(temp->data == temp->next->data)
		{
			temp2 = temp->next->next;
			free(temp->next);
			temp->next = temp2;
		}
		else
		{
			temp = temp->next;
		}
	}
	
}

void delete_duplicate_Data(Node *ptr)
{
	Node *ptr1, *ptr2, *dup;
	ptr1 = ptr;
	while(ptr1 && ptr1->next)
	{
		ptr2 = ptr1;
		while(ptr2->next)
		{
			if (ptr1->data == ptr2->next->data)
			{
				dup = ptr2->next;
				ptr2->next = ptr2->next->next;
				free(dup);
			}
			else
				ptr2 = ptr2->next;
		}
		ptr1 = ptr1->next;
	}

}

int main()
{
	Node *hptr = NULL;
	Node *hptr1, *hptr2, *hptr3,*hptr4,*hptr5,*hptr6;
	hptr1 = add_end(hptr,1);
	hptr2 = add_end(hptr1,2);
	hptr3 = add_end(hptr2,2);
	hptr4 = add_end(hptr3,4);
	hptr5 = add_end(hptr4,5);
	//print_node(hptr5);
	remove_duplicate_node(hptr5);
	//delete_duplicate_Data(hptr5);
	print_node(hptr5);
}