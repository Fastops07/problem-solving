#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}

void put_nl(void)
{
    ft_putchar('\n');
}

int ft_atoi(char *str)
{
    int res = 0;
    int i = 0;
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

void put_hex(int nb)
{
    if(nb > 15)
        put_hex(nb / 16);
    int new = nb % 16;
    char curr;
    if(new > 9)
        curr = (new - 10) + 'a';
    else 
        curr = new + '0';
    ft_putchar(curr); 
}
/*
void	put_hex(unsigned int nb)
{
	char	*base;

	base = "0123456789abcdef";
	if (nb >= 16)
		put_hex(nb / 16);
	ft_putchar(base[nb % 16]);
}
*/

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        put_nl();
        return 1;
    }
    int nb = ft_atoi(argv[1]);
    put_hex(nb);
    put_nl();
    return 0;
}