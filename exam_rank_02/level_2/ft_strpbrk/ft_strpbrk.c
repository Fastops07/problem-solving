#include <stddef.h>

int contains (unsigned char c, unsigned char *str)
{
    int i = 0;
    while (str[i])
    {
        if(c == str[i])
            return 1;
        i++;
    }
    return 0;
}
char	*ft_strpbrk(const char *s1, const char *s2)
{
    if(!s1 || !s2)
        return (NULL);
    unsigned char *s1_bytes = (unsigned char*) s1;
    unsigned char *s2_bytes = (unsigned char*) s2; 
    int i = 0;
    while(s1_bytes && s1_bytes[i])
    {
        if(contains(s1_bytes[i], s2_bytes))
            return (char *)(s1_bytes + i);
        i++;
    }
    return (NULL);
}
/*
#include <string.h>
#include <stdio.h>

int main()
{
    printf("Coucou :%s\n", strpbrk("Clacazo", "blma"));
    printf("Coucou :%s\n", ft_strpbrk("Clacazo", "blma"));
}
*/