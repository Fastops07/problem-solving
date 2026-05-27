int transform_letter_min(char c)
{
	int i = 0;

	while (i < 13)
	{
		printf("i : %d | c : %c\n", i,c);
		if(c == 'z')
			c = 'a';
		else
			c++;
		i++;
	}
	printf("Fin : %c\n",c);
}

int main()
{
	transform_letter_min('z');
}