// swap node in a link list without swapping data.

// Given a linked list and two keys in it. swap node for two given key.
// node should be swap by chnaging links.

#include <iostream>
using namespace std;
class Node
{
public:
	int data;
	Node *next;
};
void add_begin(Node **head, int data_new)
{
	Node *temp = new Node();
	temp->data = data_new;
	temp->next = *head;
	*head = temp;
}
Node* add_end(Node *head_ptr,int new_data)
{
	Node *temp = new Node();
	temp->data = new_data;
	temp->next = NULL;
	if (head_ptr ==NULL)
	{
		head_ptr = temp;
	}
	else
	{
		Node *ptr = head_ptr;
		while(ptr->next)
		{
			ptr=ptr->next;
		}

		ptr->next = temp;
	}
	return head_ptr;
}

void print(Node *ptr)
{
	while(ptr)
	{
		cout << ptr->data << " ";
		ptr=ptr->next;
	}
	cout << endl;
}

Node * swap_ll_without_data(Node *node_ptr,int n1, int n2)
{
	int len=0;
	Node *temp = node_ptr;
	while (temp)
	{
		len++;
		temp = temp->next;
	}
	if (len <2)
	{
		cout << " LL len<2 swapping between nodes are not possible" <<endl;
	}
	else
	{
		Node *check = node_ptr;
		Node *ptr1,*ptr2;
		for (int i=1; i<=len;i++)
		{
			if (i==n1-1)
			{
				ptr1 = check;
			}
			else if(i==n2-1)
			{
				ptr2 = check;

			}
			else
			{
				check = check->next;
			}

		}	

		Node *swap = ptr1->next ;
		ptr1->next = ptr2->next;
		ptr2->next = swap;

	}
	return node_ptr;
}

void swapNodes(Node** head_ref, int x, int y)
{	
	// Nothing to do if x and y are same.
	if (x==y)
		return;
	// Search for x keep track of prevX and currX
	Node*prevX = NULL, *currX= *head_ref;
	while(currX && currX->data !=x)
	{
		prevX = currX;
		currX = currX->next;
	}

	// search for y (keep track of prevY and currY)
	Node *prevY = NULL, *currY = *head_ref;
	while(currY && currY->data != y)
	{
		prevY = currY;
		currY = currY->next;
	}

	// If either x and y is not present , nothing to do.
	if (currX == NULL and currY == NULL)
		return;

	// if x is not the head of LL
	if (prevX!=NULL)
	{
		prevX->next = currY;
	}
	else
		*head_ref = currY;

	if (prevY!=NULL)
	{
		prevY->next = currX;
	}
	else
		*head_ref = currX;

	// swap next pointer
	Node *temp = currY->next;
	currY->next = currX->next;
	currX->next = temp;
}

int main()
{
	/*Node *hptr = NULL;
	Node *hptr1,*hptr2,*hptr3,*hptr4;
	hptr1 = add_end(hptr,1);
	hptr2 = add_end(hptr1,2);
	hptr3 = add_end(hptr2,3);
	hptr4 = add_end(hptr3,4);
	print(hptr4);
	//Node *hptr_swapped;
	//hptr_swapped = swap_ll_without_data(hptr4,2,3);*/

	Node *hptr = NULL;
	add_begin(&hptr,1);
	add_begin(&hptr,2);
	add_begin(&hptr,3);
	add_begin(&hptr,4);
	print(hptr);
	swapNodes(&hptr, 1, 3);
	print(hptr);
}