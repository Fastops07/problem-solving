#include <unistd.h>

void ft_putchar(char c)
{
    write (1,&c,1);
}
void put_nl(void)
{
    ft_putchar('\n');
}

int is_prime(int nb)
{
    if(nb < 2)
        return 0;
    int i = nb - 1;
    while (i > 1)
    {
        if (nb % i == 0)
            return 0;
        i--;
    }
    return 1;
}
int is_digit(char c)
{
    return (c >= '0' && c <= '9');
}

int ft_atoi(char * str)
{
    int res = 0;
    int i = 0;
    while (str[i])
    {
        if(!(is_digit(str[i])))
            return -1;
        res = res * 10 + str[i] - '0';
        i++;
    }
    return res;
    
}
void ft_put_nb(int nb)
{
    if(nb / 10 > 0)
        ft_put_nb(nb/10);
    char c = nb % 10 + '0';
    ft_putchar(c);
}
int main(int argc, char ** argv)
{
    if(argc != 2)
    {
        write(1,"0\n",2); 
        return 0;
    }
    int nb = ft_atoi(argv[1]);
    if (nb <= 0)
    {
        write(1,"0\n",2); 
        return 0;
    }
    
    int res = 0;
    while (nb > 0)
    {
        if(is_prime(nb))
        {
            res += nb;
        }
        nb--;
    }
    ft_put_nb(res);
    put_nl();
}