#include <unistd.h>

void put_nl(void)
{
	write(1,"\n",1);
}
int is_alpha(char c)
{
	return (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z');
}
int verify_input(char *str)
{
	int i = 0;
	while (str[i])
	{
		if(!is_alpha(str[i]))
			return -1;
		i++;
	}
	return (0);
}
int main(int argc, char **argv)
{
	if(argc != 2)
	{
		put_nl();
		return 0;
	}
	char *str = argv[1];
	if(verify_input(str) == -1)
	{
		put_nl();
		return 0;
	}
	int i = 0;
	char curr;
	while(str[i])
	{
		curr = str[i];
		if (curr >= 'A' && curr <= 'Z')
		{
			curr = curr + 32;
			write(1,"_",1);
			write(1,&curr,1);
		}
		else
			write(1,&curr,1);
		i++;
	}
	put_nl();
	return 0;
}