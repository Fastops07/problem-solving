#include <unistd.h>
void ft_put_char(char c)
{
    write(1,&c,1);
}

void put_nl(void)
{
    ft_put_char('\n');
}

int is_underscore(char c)
{
    return (c == '_');
}
int is_min(char c)
{
    return (c >= 'a' && c <= 'z');
}
int print_to_camel(char *str)
{
    if(str[0] && str[1] && 
        str[0] == '_' && is_min(str[1]))
    {
        ft_put_char (str[1] - 32);
        return 2;
    }
    return -1;
    
}

int main(int argc, char ** argv)
{
    if(argc != 2)
    {
        put_nl();
        return 0;
    }
   
    char *str = argv[1];
    int i = 0;
    int print_return;
    while(str[i])
    {
        while(str[i] && !(is_underscore(str[i])))
        {
            ft_put_char(str[i]);
            i++;
        }
        if(!str[i])
        {
            put_nl();
            return 0;
        }
        print_return = print_to_camel(str + i);
        if(print_return == -1)
        {
            put_nl();
            return 1;
        }
        i += print_return;
    }
    put_nl();
    return 0;
}