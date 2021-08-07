// write a function to get the intersection point of two link list.
// Given two linked list of size N and M consisting of positive value nodes,
// having a common intersection point

#include <bits/stdc++.h>
using namespace std;


// create node class
class Node 
{
public:
	int data;
	Node *next;
};
int getIntersectionNode(Node*head1, Node* head2);
int _getIntersectionNode(int d,Node* head1,Node *head2);


int count_node(Node *ptr)
{
	int count = 0;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return count;
}
int getIntersectionNode(Node *head1,Node *head2)
{
	int d;
	int nth_node;
	int d1 = count_node(head1);
	int d2 = count_node(head2);

	if (d1>d2)
	{
		
		d = d1-d2;
		return _getIntersectionNode(d,head1,head2);
	}
	else
	{
		int nth_node;
		d = d2-d1;
		return _getIntersectionNode(d,head1,head2);
	}
}

int _getIntersectionNode(int d,Node *head1,Node*head2)
{
	Node * current1 = head1;
	Node *current2 = head2;

	for (int i=0;i<d;i++)

	{
		if(current1 == NULL)
		{
			return -1; 
		}
		current1 = current1->next;
	}
	// Move both pointers of both list till they intersect with each other
	while(current1 !=NULL && current2 != NULL)
	{
		if(current1 == current2 )
			return current1->data;
	
		current1 = current1->next;
		current2= current2->next;
	}

	return -1;
}

int main()
{
	// create two link list.
	Node *newNode;

	// addition of new node .
	Node *head1 = new Node();
	head1->data = 10;

	Node *head2  = new Node();
	head2->data = 3;

	newNode = new Node();
	newNode->data = 6;
	head2->next = newNode;

	newNode = new Node();
	newNode->data = 9;
	head2->next->next = newNode;

	newNode = new Node();
	newNode->data = 15;
	head1->next = newNode;
	head2->next->next->next = newNode;

	newNode = new Node();
	newNode->data = 30;
	head1->next->next = newNode;
	head1->next->next->next = NULL;

	cout << "The node of intersection is " << getIntersectionNode(head1, head2);

}