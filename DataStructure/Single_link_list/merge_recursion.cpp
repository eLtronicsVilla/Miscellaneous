Node * merge(Node *a, Node*b)
{
	Node *result=NULL;

	if (a =NULL)
		return b;
	if (b=NULL)
		return a;
	if (a->data <= b->data)
	{
		result = a;
		result->next = merge(a->next,b);
	}
	else
	{
		result = b;
		result->next = merge(a,b->next); 
	}
	return result;
}