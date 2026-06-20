#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void put_nl()
{
    write(1, "\n", 1);
}

int is_space(char c)
{
    return (c == ' ' || c == '\t');
}

int is_min(char c)
{
    return (c >= 'a' && c <= 'z');
}

int is_maj(char c)
{
    return (c >= 'A' && c <= 'Z');
}
void str_cap(char *str)
{
    if(!str)
        return;
    int i = 0;
    while(str[i])
    {
        while(str[i] && is_space(str[i]))
            i++;
        if(!str[i])
            break;
        if(is_min(str[i]))
            str[i] = str[i] - 32;
        i++;
        while(str[i] && !(is_space(str[i])))
        {
            if(is_maj(str[i]))
                str[i] = str[i] + 32;
            i++;
        }
    }
    int j = 0;
    while(str[j])
    {
        ft_putchar(str[j]);
        j++;
    }
}
int main(int argc, char **argv)
{
    if(argc < 2)
    {
        put_nl();
        return 0;
    }
    int i = 1;
    while(argv[i])
    {
        str_cap(argv[i]);
        put_nl();
        i++;
    }
    return 0;
}