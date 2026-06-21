#include "ft_list.h"

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list *curr = begin_list;
    
    while(curr)
    {
        (*f)(curr->data);
        curr = curr->next;
    }
}

#include <stdio.h>

void to_double(void *data)
{
    int *nb = (int *) data;
    *nb *= 2;
}

int main()
{
    int one = 1;
    int two = 22;
    int three = 3;

    t_list c = {NULL, &three};
    t_list b = {&c, &two};
    t_list a = {&b, &three};
    ft_list_foreach(&a,&to_double);
    printf("%d\n",*(int *)a.next->data);

}