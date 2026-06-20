#include <unistd.h>

void ft_putchar(char c)
{
    write(1,&c,1);
}
void put_nl(void)
{
    write (1,"\n",1);
}
int ft_atoi(char *str)
{
    if(!str)
        return 0;
    int i = 0;
    int res = 0;
    while(str[i])
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            res = res * 10 + (str[i] - '0');
            i++;
        }
        else 
            return 0;
    }
    return res;
}

void put_nb(int nb)
{
    if(nb > 9)
        put_nb(nb / 10);
    char curr = (nb % 10) + '0';
    ft_putchar(curr);
}

void print_tab(int nb, int i, int res)
{
    put_nb(i);
    write(1," x ",3);
    put_nb(nb);
    write(1," = ",3);
    put_nb(res);
    put_nl();
}

void tab_mult (int nb)
{
    int i = 1;
    while(i < 10)
    {
        int res = nb * i;
        print_tab(nb,i,res);
        i++;
    }
}

int main(int argc, char **argv)
{
    if(argc != 2)
    {
        put_nl();
        return 0;
    }

    int nb = ft_atoi(argv[1]);
    tab_mult(nb);
    return 0;
}