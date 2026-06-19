#include <unistd.h>
void ft_putchar (char c)
{
    write(1,&c,1);
}
void put_nl(void)
{
    ft_putchar('\n');
}

int contains(char c, char *str)
{
    int i = 0;
    while (str[i])
    {
        if(str[i] == c)
            return i;
        i++;
    }
    return -1;
}

int main(int argc,char **argv)
{
    if(argc != 3)
    {
        put_nl();
        return 0;
    }
    char *str1 = argv[1];
    char *str2 = argv[2];

    if (!str1[0])
    {
        ft_putchar('1');
        put_nl();
        return 0;
    }

    int i = 0;
    int j = 0;
    int return_v;
    while(str1[i])
    {
        return_v = contains(str1[i], str2 + j);
        if(return_v < 0)
        {
            ft_putchar('0');
            put_nl();
            return 0;
        }
        j+= return_v + 1; // SINON on skip pas le caractère trouver
        i++;
    }
    ft_putchar('1');
    put_nl();
    return 0;
}