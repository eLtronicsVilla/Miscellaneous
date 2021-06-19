// merge sort


#include <iostream>
using namespace std;

class Node 
{
public:
	int data;
	Node *next;
};

Node *sortedMerge(Node *a, Node *b);
void frontBackSplit(Node* source, Node **frontRef , Node **backRef);

void MergeSort(Node **headRef)  // sort the link list
{
	Node *head = *headRef;
	Node *a;
	Node *b;

	// base case -- length 0 or 1
	if ((head == NULL) || (head->next == NULL))
		return;

	// split head into 'a' and 'b' sublist.
	frontBackSplit(head,&a,&b);

	// recursively sort the sublist
	MergeSort(&a);
	MergeSort(&b);

	// answer = merge the two sorted list together.
	*headRef = sortedMerge(a,b);
}

Node * sortedMerge(Node *a,Node*b)
{
	Node *result = NULL;
	if (a ==NULL)
		return b;
	if (b == NULL)
		return a;

	if (a->data <= b->data)
	{
		result = a;
		result->next = sortedMerge(a->next,b);

	}
	else
	{
		result = b;
		result->next = sortedMerge(a,b->next);
	}
	return result;
}

// utility function 
/* split the node of the given list into front and back halves,
and return the two list using the reference parameters.
If the length is odd , the extra node should go in the front list.
*/

void frontBackSplit(Node * source , Node ** frontRef, Node **backRef)
{
	Node * fast;
	Node * slow;
	slow = source;
	fast = slow->next;

	// Advace 'fast' two nodes and advance slow one node.
	while(fast !=NULL)
	{
		fast = fast->next;
		if (fast != NULL)
		{
			slow = slow->next;
			fast = fast->next;
		}
	}
	// slow is before the midpoint in the list , so split it in two at that point.
	*frontRef = source;
	*backRef = slow->next;
	slow->next = NULL;
}

void  add_begin(Node **head, int new_data)
{
	Node *ptr = *head;
	Node *new_node = new Node();
	new_node->data = new_data;
	new_node->next = *head;
	*head = new_node;
	
}

void print(Node *ptr)
{
	while(ptr)
	{
		cout << ptr->data << " ";
		ptr = ptr->next;
	}
	cout <<endl;
}



int main()
{
	Node *res = NULL;
	Node *a = NULL;

	add_begin(&a,10);
	add_begin(&a,70);
	add_begin(&a,40);
	add_begin(&a,30);
	add_begin(&a,200);

	MergeSort(&a);
	print(a);
}