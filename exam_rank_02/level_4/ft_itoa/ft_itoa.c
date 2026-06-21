#include <stdlib.h>

int int_size(long nb)
{
    int i = 1;
    while (nb > 9)
    {
        nb /= 10;
        i++;
    }
    return i;
}

char	*ft_itoa(int nbr)
{
    int is_neg = 0;
    long nb = nbr;
    if(nb < 0)
    {
        is_neg = 1;
        nb = -nb;
    }
    int res_size = int_size(nb) + is_neg;
    char *res = malloc((res_size + 1) * sizeof(*res));
    if(!res)
        return NULL;
    int start = res_size;
    res[start] = '\0';
    start--;
    while(start >= 0 + is_neg)
    {
        res[start] = '0' + (nb % 10);
        nb /= 10;
        start--;
    }
    if(is_neg)
        res[start] = '-';
    return res;
}
#include <stddef.h>
#include <stdio.h>
int main()
{
    ft_itoa(__INT_MAX__);
    ft_itoa(-2147483648);
    printf("%s\n",ft_itoa(-0));
    return 0;
}