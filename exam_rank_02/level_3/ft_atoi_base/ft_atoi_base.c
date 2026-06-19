#include <stddef.h>

int is_in_base(char c, char * base)
{
    int i = 0;
    while(base[i])
    {
        if(base[i] == c)
            return 1;
        i++;
    }
    return 0;

}
char * ft_to_upper(char *str)
{
    int i = 0;
    while(str[i])
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        i++;
    }
    return str;
}

char *get_base(int base)
{
    switch(base)
    {
        case 2:
            return "01";
        case 3:
            return "012";
        case 4:
            return "0123";
        case 5:
            return "01234";
        case 6:
            return "012345";
        case 7:
            return "0123456";
        case 8:
            return "01234567";
        case 9:
            return "012345678";
        case 10:
            return "0123456789";
        case 11:
            return "0123456789A";
        case 12:
            return "0123456789AB";
        case 13:
            return "0123456789ABC";
        case 14:
            return "0123456789ABCD";
        case 15:
            return "0123456789ABCDE";
        case 16:
            return "0123456789ABCDEF";
        default:
            return NULL;
    }
}

int find_index(char c, const char *base)
{
    int i = 0;
    while(base[i])
    {
        if(base[i] == c)
            return i;
        i++;
    }
    return 0;

}

int	ft_atoi_base(const char *str, int str_base)
{
    long res = 0;
    int sign = 1;
    int i = 0;

    char *str_upper = ft_to_upper((char *)str);
    char *base = get_base(str_base);

        if(str_upper[i] == '-')
            sign = -1;
        if(str_upper[i] == '-' || str_upper[i] == '+')
            i++;
        while(is_in_base(str_upper[i], base))
        {
            res = (res * str_base) + find_index(str_upper[i], base);
            i++; 
        }
    return (int) res *sign;
}
#include <stdio.h>
int main()
{
    printf("%d\n",ft_atoi_base("3200",4));
}