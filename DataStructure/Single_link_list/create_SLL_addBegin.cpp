// Link list is a linear data structure, in which the element are not stored at contiguous memory location.
// The element in a link list are link using pointers.
// Why LL is used over array:
// Limitation for array:-
//1.SIze of array is fixed.
//2.Inserting a new element and deleting in array is expensive.
// Advantage over array:-
// 1) Dynamic size
//2) Ease of insertion and deletion
// Drawback:-
// 1. random access is not allowed
//2. Not cache friendly


/*
// In C
// A link list node

struct Node
{
	int data;
	struct Node *next;
};


// In C++
class Node
{
public:
	int data;
	Node *next;
};
}

// in python

#Node class

#function to intialize the LL object 
def __init__(self,data):
	self.data = data #assign data 
	self.next = None #initialize next as null

# link list 


class LinkedList:
	#function to initialize the linked list object
	# List object
	def __init__(self):
		self.head = None


*/

// Create single link list add begin.

#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int node_data;
	struct Node *next;
};
void create_node(struct Node **node_ptr,int data)
{
	struct Node *ptr = new Node();
	ptr->node_data = data;
	ptr->next = *node_ptr;
	*node_ptr = ptr;
}

void print_node(struct Node *ptr)
{

	while(ptr)
	{
		
		cout<< ptr->node_data << " ";
		ptr=ptr->next;

	}
	cout <<endl;
}


int main()
{
	struct Node *hptr=NULL;
	create_node(&hptr,4);
	create_node(&hptr,5);
	create_node(&hptr,6);
	create_node(&hptr,7);
	print_node(hptr);
}
