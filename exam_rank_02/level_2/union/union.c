#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}
void put_nl()
{
    ft_putchar('\n');
}

int n_contains(char *str,char c, int n)
{
    int i = 0;
    while(str[i] && i < n)
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
        put_nl();
        return 0;
    }
    char *str1 = argv[1];
    char *str2 = argv[2];
    int i = 0;

    while(str1[i])
    {
        if(!(n_contains(str1, str1[i], i)))
            ft_putchar(str1[i]);
        i++;
    }

    int j = 0;

    while(str2[j])
    {
        if(!(n_contains(str1,str2[j],i))
            && !(n_contains(str2,str2[j], j)))
            ft_putchar(str2[j]);
        j++;
    }

    put_nl();
    return 0;
}