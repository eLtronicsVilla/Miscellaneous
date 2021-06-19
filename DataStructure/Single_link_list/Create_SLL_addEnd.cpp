// Single link list - add end
#include <bits\stdc++.h>
using namespace std;

struct Node 
{

	int node_data;
	Node *next;
};
struct Node * add_end(struct Node *node_ptr,int data)
{
	struct Node *ptr, *temp;
	ptr=node_ptr;
	temp = new Node();
	temp->node_data = data;
	temp->next = NULL;
	if (node_ptr == NULL)
		node_ptr = temp;
	else 
	{
		while(ptr->next!=NULL)
			ptr=ptr->next;
		ptr->next = temp;
	
	}
	return node_ptr;

}

void print(struct Node *ptr)
{
	while(ptr)
	{
		cout << ptr->node_data << " ";
		ptr= ptr->next;
	}
	cout <<endl;
}

int main()
{
	struct Node *hptr = NULL;
	struct Node *hptr1,*hptr2,*hptr3,*hptr4;
	hptr1 = add_end(hptr,1);
	hptr2 = add_end(hptr1,2);
	hptr3 = add_end(hptr2,3);
	hptr4 = add_end(hptr3,4);
	print(hptr4);
}