int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n % 2 == 0)
		n = n / 2;
	return (n == 1);
}

/*
ZINZIN
int	is_power_of_2(unsigned int n)
{
	return (n != 0 && (n & (n - 1)) == 0);
}
    
#include <stdio.h>
int main()
{
    printf("%d\n", is_power_of_2(2));
    printf("%d\n", is_power_of_2(256));
    printf("%d\n", is_power_of_2(9));
    printf("%d\n", is_power_of_2(999));
    printf("%d\n", is_power_of_2(1025));
}
*/