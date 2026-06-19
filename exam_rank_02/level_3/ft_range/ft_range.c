#include <stdlib.h>

int     *ft_range(int start, int end)
{
        int size;
        int dir;
        if(start > end)
        {
            size = (start - end) + 1;
            dir = -1;
        }
        else 
        {
            size = (end - start) + 1;
            dir = 1;
        }
        
        int *res = malloc(size * sizeof(*res));
        if (!res)
            return NULL;
        int i = 0;
            while(i < size)
            {
                res[i] = start;
                i++;
                start += dir;
            }
        return res;
}
/*
#include <stdio.h>
void print_tab(int *tab, int size)
{
    int i = 0;
    while(i < size)
    {
        printf("%d\n", tab[i]);
        i++;
    } 
}

int main()
{
    int *out = ft_range(0,-50);
    print_tab(out, 51);
}
*/