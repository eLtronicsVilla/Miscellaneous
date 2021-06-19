// reverse the link list

#include <iostream>
using namespace std;

class Node 
{
public:
	int data;
	Node *next;
};
void add_begin(Node **ptr_ref, int data_new)
{
	Node *new_node = new Node();
	new_node->data = data_new;
	new_node->next = *ptr_ref;
	*ptr_ref = new_node;
}

void print(Node *ptr)
{
	while(ptr)
	{
		cout << ptr->data << " ";
		ptr = ptr->next;
	}
	cout << endl;
}

void reverse_iterative (Node **head)
{
	Node *curr = *head;
	Node *prev = NULL;
	Node *nex = NULL;

	while(curr)
	{
		nex = curr->next;
		curr->next = prev;
		prev = curr;
		curr = nex;
	}
	*head = prev;
}

int main()
{
	Node *hptr = NULL;
	add_begin(&hptr,1);
	add_begin(&hptr,2);
	add_begin(&hptr,3);
	add_begin(&hptr,4);
	print(hptr);
	reverse_iterative(&hptr);
	print(hptr);

}