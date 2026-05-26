#include <unistd.h>

int is_space(char c)
{
	return (c == ' ' || c == '\t');
}
int main (int argc, char **argv)
{
	int i = 0;

	if(argc != 2)
	{
		write(1,"\n", 1);
		return (1);
	}
	char *str = argv[1];
	while (is_space(str[i]))
		i++;
	while (str[i] && !is_space(str[i]))
	{
		char c = str[i];
		write(1,&c,1);
		i++;
	}
	write(1,"\n",1);
	return (0);
	
}

