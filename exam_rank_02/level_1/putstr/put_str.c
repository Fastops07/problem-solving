#include <unistd.h>
int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
	i++;
	return i;
}
void	ft_putstr(char *str)
{
	if(!str)
		return;
	write(1, str,ft_strlen(str));
}

int main()
{
	ft_putstr(NULL);
}