/*
LE PLUS SIMPLE C EST CA MAIS J AI FAIT AUTREMENT

char    *ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

*/

int ft_strlen(char *s)
{
	int i;
	i = 0;

	while (s[i])
		i++;
	return (i);
}

char    *ft_strcpy(char *s1, char *s2)
{
	int s2_len = ft_strlen(s2);
	int i = 0;

	while(i < s2_len)
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
	char *s1 = malloc(6);
	char *s2 = "Salut";
	char *res = ft_strcpy(s1,s2);
	printf("S1 : %s\nRes :%s\n", s1,res);
}