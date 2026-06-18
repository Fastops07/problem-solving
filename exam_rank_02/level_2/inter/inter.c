#include <unistd.h>
void ft_put_char(char c)
{
    write (1,&c,1);
}
int contains(char c, char *accept)
{
    int i = 0;
    while (accept[i])
    {
        if(c == accept[i])
            return 1;
        i++;
    }
    return 0;
}

int n_contains(char c, char *str, int n)
{
    int i = 0;
    while (str[i] && i < n)
    {
        if(str[i] == c)
            return 1;
        i++;
    }
    return 0;
}

int main(int argc, char **argv)
{
    if(argc != 3)
    {
        ft_put_char('\n');
        return (0);
       
    }
    char *str = argv[1];
    char *accept = argv[2];
    if(!str || !accept)
    {
        ft_put_char('\n');
        return (0);
    }

    int i = 0;
    while (str[i])
    {
        if(contains(str[i],accept) && !(n_contains(str[i], str,i)))
            ft_put_char(str[i]);
        i++;
    }
    ft_put_char('\n');
}
