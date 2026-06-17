#include <stddef.h>
int		max(int* tab, unsigned int len)
{
    if(len == 0)
        return (0);
    int max = tab[0];
    int i = 1;
    while (i < len)
    {
        if (tab[i] > max)
            max = tab[i];
        i++;
    } 
    return max;
}

int main(void)
{
    int tab[3] = {50,2,30};
    int maxim = max(tab,3);
    printf("%d\n", maxim);
}