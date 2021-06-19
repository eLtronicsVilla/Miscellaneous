// one by one 

#include <bits/stdc++.h>
using namespace std;

class Node 
{
public:
	int data;
	Node *next;
};

// function to remove loop
void removeLoop(Node*, Node*);

// detect and remove loop in the list 

int  detectAndRemoveLoop(Node *list)
{
	Node *ptr1 = list;
	Node *ptr2 = list;

	while(ptr1 && ptr2 && ptr1->next)
	{
		ptr1 = ptr1->next;
		ptr2 = ptr2->next->next;

		if (ptr1 == ptr2)
			removeLoop(ptr1,list);
		return 1;
	}
	return 0;
}

void removeLoop(Node *loop_node,Node *head)
{
	Node *ptr1;
	Node *ptr2;

	// set the pointer to begining of link list and move it one by one.
	ptr1 = head;
	while(1)
	{
		// now start a pointer from loop_node and check if ever reaches ptr2
		ptr2 = loop_node;
		while(ptr2->next != loop_node && ptr2->next !=ptr1)
		ptr2 = ptr2->next;		
	
		// if ptr2 reached ptr1 , there is a loop.
		if (ptr2->next == ptr1)
			break;
		// If ptr2 did't reach ptr1 then try the next node after ptr1.
		ptr1 = ptr1->next;
	}
	// After the end of loopptr2 is the last node of the loop.
	ptr2->next = NULL;
}

void print(Node *ptr)
{
	while(ptr)
	{
		cout << ptr->data << " " ;
		ptr = ptr->next;
	}
	cout <<endl;
}

Node * newNode (int key)
{
	Node *temp = new Node();
	temp->data = key;
	temp->next = NULL;
	return temp;
}

int main()
{
	Node *head = newNode(50);
	head->next = newNode(20);
	head->next->next = newNode(15);
	head->next->next->next = newNode(4);
	head->next->next->next->next = newNode(10);

	head->next->next->next->next->next = head->next->next;
	detectAndRemoveLoop(head);
	print(head);
}