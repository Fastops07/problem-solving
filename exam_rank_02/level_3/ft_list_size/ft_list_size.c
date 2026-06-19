#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
    int i = 0;
    while(begin_list)
    {
        begin_list = begin_list->next;
        i++;
    }
    return i;
}
/*

#include <stdlib.h>

// PLUS simple
#include <stdio.h>
#include "ft_list.h"

int	ft_list_size(t_list *begin_list);

int	main(void)
{
	t_list	a;
	t_list	b;
	t_list	c;

	a.next = &b;
	b.next = &c;
	c.next = NULL;

	a.data = NULL;
	b.data = NULL;
	c.data = NULL;

	printf("%d\n", ft_list_size(&a));
	printf("%d\n", ft_list_size(NULL));
	return (0);
}

// AU comme ca 

t_list *create_list(int value)
{
    t_list *new = malloc(sizeof(*new));
    new->data = (void*) value;
    new->next = NULL
    return new;
}
void add_back(t_list *head, t_list *new)
{
    while (head->next)
        head = head->next;
    head->next = new;
    
}

int main()
{
    t_list *head = create_list(100);
    for(int i = 0; i < 10; i++)
    {
        t_list *new = create_list(i);
        add_back(head,new);
    }
    int j = ft_list_size(head);
    printf("\n\n%d\n", j);
}
*/
