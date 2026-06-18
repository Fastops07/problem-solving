#include <unistd.h>
void ft_put_char(char c)
{
    write (1,&c,1);
}
void put_nl()
{
    ft_put_char('\n');
}
int is_space(char c)
{
    return ((c >= 9 && c <= 13) || c == ' ');
}
int main(int argc, char **argv)
{
    if (argc != 2)
    {
        put_nl();
        return 0;
    }
    char *str = argv[1];
    int i = 0;
    int begin = 1;

    while(str[i])
    {
        while(str[i] && is_space(str[i]))
            i++;
        if(str[i] == '\0')
            break;
        
        if(begin == 1)
            begin = 0;
        else
            ft_put_char(' ');
        while(str[i] && !(is_space(str[i])))
        {
            ft_put_char(str[i]);
            i++;
        }
    }
    put_nl();
    return 0;
}