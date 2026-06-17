int is_space(char c)
{
    return ((c >= 9 && c <= 13) || c == ' ');
}

int is_digit(char c)
{
    return (c >= '0' && c <= '9');
}

int	ft_atoi(const char *str)
{
    int i = 0;
    int sign = 1;
    int value = 0;
    while(str[i] && is_space(str[i]))
        i++;
    if(str[i] && (str[i] == '+' || str[i] == '-'))
    {
        if(str[i] == '-')
            sign = -1;
        i++;
    }
    while(str[i] && is_digit(str[i]))
    {
        value = 10 * value + str[i] - '0';
        i++;
    }
    return value * sign;
}
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("MIIINE :%d\n", ft_atoi("++42"));
    printf("ATOIII :%d\n", atoi("++42"));

    printf("MIIINE :%d\n", ft_atoi("+42"));
    printf("ATOIII :%d\n", atoi("+42"));

    printf("MIIINE :%d\n", ft_atoi("--0"));
    printf("ATOIII :%d\n", atoi("0"));

    printf("MIIINE :%d\n", ft_atoi("-123456789"));
    printf("ATOIII :%d\n", atoi("-123456789"));

}
*/
