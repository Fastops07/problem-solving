#include <unistd.h>

void put_nl(void)
{
	write(1,"\n",1);
}
int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return (i);
}

int main(int argc, char **argv)
{
	if(argc != 4)
	{
		put_nl();
		return (0);
	}
	if(ft_strlen(argv[2]) != 1 || ft_strlen(argv[3]) != 1)
	{
		put_nl();
		return (0);
	}
	char *str = argv[1];
	char aimed = argv[2][0];
	char replacing = argv[3][0];
	int i = 0;
	char curr;
	while (str[i])
	{
		curr = str[i];
		if(curr == aimed)
			write(1,&replacing,1);
		else
			write(1,&curr,1);
		i++;
	}
	put_nl();
	return (0);
}