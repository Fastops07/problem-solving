
#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	

	if(!lst || !cmp)
		return (NULL);

	t_list *curr = lst;
	int swapped = 1;
	while(swapped)
	{
	curr = lst;
	swapped = 0;	
	while(curr->next)
	{
		if(cmp(curr->data, curr->next->data) == 0)
		{
			swapped = 1;
			int temp = curr->data;
			curr->data = curr->next->data;
			curr->next->data = temp; 
		}
		curr = curr->next;
	}

	}
	return lst;

}

///// FIn
int compare(int a, int b)
{
	return (a <= b);
}

void print_list_v(t_list *head)
{
	while(head)
	{
		printf("|%d|\n",head->data);
		head = head->next;
	}
}

int main()
{
	t_list *a = malloc(sizeof(t_list));

	t_list *b = malloc(sizeof(t_list));
	
	t_list *c = malloc(sizeof(t_list));

	c->next = NULL;
	c->data = 10;

	b->next = NULL;
	b->data = -20 ;

	a->next = NULL;
	a->data = -3;

	print_list_v(a);
	sort_list(a,&compare);
	print_list_v(a);
}
