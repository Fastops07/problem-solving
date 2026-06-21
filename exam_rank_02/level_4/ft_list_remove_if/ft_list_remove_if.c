#include "ft_list.h"
#include <stdlib.h>
#include <stddef.h>
void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    if(!begin_list)
        return ;
    t_list *curr = *begin_list;
    t_list *prev = NULL;
    while(curr)
    {
        if((*cmp)(data_ref, curr->data) == 0)
        {
                t_list *temp = curr;
                curr = curr->next;
                if(prev)
                    prev->next = curr;
                else
                    *begin_list = (*begin_list)->next;
                free(temp);
                continue;
            
        }
        prev = curr;
        curr = curr->next;
    }
}

#include <stdio.h>

int cmp_str(void *a, void *b)
{
	char *s1 = (char *)a;
	char *s2 = (char *)b;
	int i = 0;

	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print_list(t_list **begin_list)
{
	t_list *cur = *begin_list;

	while (cur != 0)
	{		
        printf("%s\n", (char *)cur->data);
		cur = cur->next;
	}
}

int main(void)
{
	char straa[] = "ca";
	t_list *aa = malloc(sizeof(t_list));
	aa->next = 0;
	aa->data = straa;

	char strbb[] = "ca";
	t_list *bb = malloc(sizeof(t_list));
	bb->next = 0;
	bb->data = strbb;

	char strcc[] = "ca";
	t_list *cc = malloc(sizeof(t_list));
	cc->next = 0;
	cc->data = strcc;

	char strdd[] = "c";
	t_list *dd = malloc(sizeof(t_list));
	dd->next = 0;
	dd->data = strdd;

	aa->next = bb;
	bb->next = cc;
	cc->next = dd;

	t_list **begin_list = &aa;

	print_list(begin_list);
	printf("----------\n");
	ft_list_remove_if(begin_list, strdd, &cmp_str);
	print_list(begin_list);
}