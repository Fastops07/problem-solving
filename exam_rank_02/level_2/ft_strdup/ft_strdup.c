#include <stdlib.h>

int ft_str_len(char *str)
{
    int len = 0;
    while(str[len])
        len++;
    return len;
}

char    *ft_strdup(char *src)
{
    if(!src)
        return (NULL);
    int lenght = ft_str_len(src);
    int i = 0;
    char *res = malloc((lenght + 1) * sizeof(*res));
    if(!res)
        return (NULL);
    while(src[i])
    {
        res[i] = src[i];
        i++;
    }
    res[i] = '\0';
    return (res);

}
/*  
#include <stdio.h>

int main()
 {
    printf("%s\n", ft_strdup("Yoo"));
    printf("%s\n", strdup("Yoo"));

   printf("%s\n", ft_strdup(""));
    printf("%s\n", strdup(""));
 }
*/