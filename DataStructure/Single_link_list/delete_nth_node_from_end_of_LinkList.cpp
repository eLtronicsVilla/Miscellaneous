/* Delete the nth node from the end of the link list.

Step 1: Take two pointers , the first will point to the head of the link list.
Second pointer will point to nth node from the beginning.
Step2: Now keep increamenting both the pointer by once at the same time untill the second is pointing to the last node of the link list.
Step3: After the operation from the previous step , the first pointer should point to Nth node from the end now. 

*/

#include <bits/stdc++.h>
using namespace std;

class Node 
{
public:
	int data;
	Node *next;
};

// function to insert node in a link list
Node *create(Node *head,int x)
{
	Node *temp;
	Node *ptr = head;
	temp = new Node();
	temp->data = x;
	temp->next = NULL;
	if (head == NULL)
		head = temp;
	else

	{
		while(ptr->next !=NULL)
			ptr=ptr->next;
		ptr->next= temp;
	}
	return head;
}

void print(Node*head)
{
	Node *temp = head;
	while(temp !=NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout <<endl;
}

Node * delete_nth_node(Node * head,int B)
{
	// store len of link list
	int len = 0;
	Node * temp = head;
	while(temp !=NULL){
		len++;
		temp=temp->next;
	}
	//  if n is greater than len , that we cannot remove.
	if (B>len)
	{
		cout << "Length of the link list is " <<len;
		cout << "we can't remove " << B << "th node from link list" <<endl;
		return head;
	}
	else if (B==len)
	{
		return head->next;
	}
	else
	{
		// remove len-Bth node from starting 
		int diff = len-B;
		Node *prev = NULL;
		Node *curr = head;
		for (int i=0;i<diff;i++)
		{
			prev = curr;
			curr= curr->next;
		}
		prev->next = curr->next;
		delete curr;
		return head;
	}
}

int main()
{
	Node *hptr=NULL;
	Node *hptr1,*hptr2,*hptr3,*hptr4;
	hptr1 = create(hptr,1);
	hptr2 = create(hptr1,2);
	hptr3 = create(hptr2,3);
	hptr4 = create(hptr3,4);
	print(hptr4);
	Node * hptr_ref = delete_nth_node(hptr4,2);
	print(hptr_ref);
}