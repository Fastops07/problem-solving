#include <unistd.h>
void ft_putchar(char c)
{
    write(1,&c,1);
}
void put_nl(void)
{
    write(1,"\n",1);
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
void rstr_cap(char *str)
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
        while(str[i] && str[i+1] && (!is_space(str[i + 1])))
        {
            if(is_maj(str[i]))
                str[i] = str[i] + 32;
            i++;
        }
        if(is_min(str[i]))
            str[i] = str[i] - 32;
        i++;
    }

    int j = 0;
    while (str[j])
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
    while (argv[i])
    {
        rstr_cap(argv[i]);
        i++;
        put_nl();
    }
    return 0;
}

/*
void ft_putchar(char c)
{
    write(1,&c,1);
}
void put_nl(void)
{
    write(1,"\n",1);
}
int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return i;
}
int is_min(char c)
{
    return (c >= 'a' && c <= 'z');
}

int is_maj (char c)
{
    return (c >= 'A' && c <= 'Z');
}

int is_alpha(char c)
{
    return (is_maj(c) || is_min(c));
}
int is_space(char c)
{
    return (c == ' ' || c == '\t');
}

void rstr_cap(char *str)
{
    if(!str)
        return ;
    int i = ft_strlen(str) - 1;
    int already_transform;
    while(i >= 0)
    {
        while(is_space(str[i]))
            i--;
        if(is_min(str[i]))
            str[i] = str[i] - 32;
        i--;
        while (is_alpha(str[i]))
        {
            if(is_maj(str[i]))
                str[i] = str[i] + 32;
            i--;
        }
        
    }
    int j = 0;
    while (str[j])
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
    while (argv[i])
    {
        rstr_cap(argv[i]);
        i++;
        put_nl();
    }
    return 0;
}
*/