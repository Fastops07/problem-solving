#include <stddef.h>

int	value_of(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
    long res = 0;
    int sign = 1;
    int i = 0;

    if(str[i] == '-')
        sign = -1;
    if(str[i] == '-' || str[i] == '+')
        i++;
    int value = value_of(str[i]);
    while(value >= 0 && value < str_base)
    {
        res = (res * str_base) + value;
        i++;
        value = value_of(str[i]); 
    }
    return (int) res *sign;
}
#include <stdio.h>
int main()
{
    printf("%d\n",ft_atoi_base("F0f",16));
}