#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}
void put_nl()
{
    ft_putchar('\n');
}
void print_three_spaces(void)
{
    write(1,"   ",3);
}

int is_space(char c)
{
    return (c == ' ' || c == '\t');
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        put_nl();
        return (1);
    }
    char *str = argv[1];
    int i = 0;
    int begin = 1;
    while(str[i])
    {
        while (str[i] && is_space(str[i]))
            i++;
        if(str[i] == '\0')
            break;
        if(begin == 1)
            begin = 0;
        else
            print_three_spaces();
        while(str[i] && !(is_space(str[i])))
        {
            ft_putchar(str[i]);
            i++;
        }
    }
    put_nl();
    return 0;

}