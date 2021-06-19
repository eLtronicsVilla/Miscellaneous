// reverse the link list in group of given size.

#include <iostream>
using namespace std;

class Node 
{
public:
	int data;
	Node *next;
};

Node * reverse(Node *head, int k)
{
	if (!head)
		return NULL;

	Node *curr = head;
	Node *nxt = NULL;
	Node *prv = NULL;

	int count = 0;

	// reverse first k node of the link list
	while(curr !=NULL && count <k)
	{
		nxt = curr->next;
		curr->next = prv;
		prv = curr;
		curr = nxt;
		count++;
	}

	/* next is now a pointer to (k+1)th node
	Recursive call for the list starting from current.
	And make rest of the list as next of first node. */ 
	if (nxt !=NULL )
		head->next = reverse(nxt,k);

	// prev is new head of input list.
	return prv;
}

void push(Node **head, int new_data)
{
	Node *new_node = new Node();
	new_node->data = new_data;
	new_node->next = *head;
	*head = new_node;
}

void print(Node *node)
{
	while(node)
	{
		cout << node->data << " " ;
		node = node->next;
	}
	cout <<endl;
}


int main()
{
	Node *head = NULL;
	push(&head,9);
	push(&head,8);
	push(&head,7);
	push(&head,6);
	push(&head,5);
	push(&head,4);
	push(&head,3);
	push(&head,2);
	push(&head,1);

	print(head);

	head = reverse(head,3);

	print(head);
}