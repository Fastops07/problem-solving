#include <unistd.h>

void put_nl(void)
{
	write(1,"\n",1);
}

int is_min(char c)
{
	return (c >= 'a' && c <= 'z');
}
int is_maj (char c)
{
	return (c >= 'A' && c <='Z');
}

int main(int argc, char **argv)
{
	if(argc != 2)
	{
		put_nl();
		return (0);
	}

	char *str = argv[1];
	int i = 0;
	char curr;
	while(str[i])
	{
		curr = str[i];
		if(is_maj(curr))
			curr += 32;
		else if(is_min(curr))
			curr -= 32;
		write(1,&curr,1);
		i++;
	}
	put_nl();
	return (0);
}