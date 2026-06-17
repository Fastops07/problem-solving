#include <stddef.h>

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return i;
}
char    *ft_strrev(char *str)
{
    if(!str)
        return (NULL);
    int i = 0;
    int last = ft_strlen(str) - 1;
    char temp;
    while (i < last - i)
    {
        temp = str[i];
        str[i] = str[last -i];
        str[last -i] = temp;
        i++;
    }
    return str;
}
#include <stdio.h>
int main()
{
    char b[] = "abc";
    printf("Avant %s\n", b);
    printf("Retour :%s\nAutre :%s\n",ft_strrev(b),b);

}