#include <unistd.h>
void ft_putchar(char c)
{
    write (1,&c,1);
}
void put_nl(void)
{
    ft_putchar('\n');
}

int find_char(char c, char *str)
{
    int i = 0;
    while(str[i])
    {
        if(str[i] == c)
            return i;
        i++;
    }
    return -1;
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
    int j = 0;
    int offset = 0;

    while(str1[i])
    {
        offset = find_char(str1[i], str2 + j) + 1;
        
        if(offset > 0)
            j += offset;
        else
            break;
        i++;
    }
    if(str1[i] == '\0')
    {
        int y = 0;
        while(str1[y])
        {
            ft_putchar(str1[y]);
            y++;
        }
    }
    put_nl();
    return 0;
}