// reverse the link list 
#include <iostream>
using namespace std;

class Node 
{
public:
	int data;
	Node *next;
};

Node * add_end(Node *ptr_ref,int new_data)
{
	Node *temp = new Node();
	temp->data = new_data;
	temp->next = NULL;

	Node *ptr = ptr_ref;
	if(ptr_ref == NULL)
	{
		ptr_ref = temp;
	}
	else 
	{
		while(ptr->next)
		{
			ptr=ptr->next;
		}
		ptr->next = temp;
	}
		
	return ptr_ref;
}
void print(Node *ptr)
{
	while (ptr)
	{
		cout << ptr->data << " ";
		ptr = ptr->next;
	}
	cout <<endl;
}

Node * reverse_recursion(Node *head)
{
	Node *ptr = head;
	
	if (head ==NULL || head->next == NULL)
		return ptr;
	
	Node *rest = reverse_recursion(head->next);
	head->next->next = head;
	head->next  = NULL;
		
	return rest;
}

int main()
{
	Node *hptr = NULL;
	Node *hptr1, *hptr2, *hptr3, *hptr4;

	hptr1 = add_end(hptr,1);
	hptr2 = add_end(hptr1,2);
	hptr3 = add_end(hptr2,3);
	hptr4 = add_end(hptr3,4);

	print(hptr4);

	Node *revr = reverse_recursion(hptr4);
	print(revr);
}