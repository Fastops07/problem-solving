#include <stddef.h>
int contains(unsigned char c, unsigned char *str)
{
    if(!str)
        return 0;
    int i = 0;
    while(str[i])
    {
        if(str[i] == c)
            return 1;
        i++;
    }
    return 0;
}

size_t	ft_strcspn(const char *s, const char *reject)
{

    unsigned char *s_bytes = (unsigned char *) s;
    unsigned char *reject_bytes = (unsigned char *) reject;
    size_t i = 0;

    while(s_bytes && s_bytes[i])
    {
        if(contains(s_bytes[i],reject_bytes))
            return i;
        i++;
    }
    return i;
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
    printf("%ld\n",strcspn("abricado", "z"));
    printf("%ld\n",ft_strcspn("abricado", "z"));

    printf("%ld\n",strcspn("abricado", "a"));
    printf("%ld\n",ft_strcspn("abricado", "a"));

    printf("%ld\n",strcspn("abricado", "r"));
    printf("%ld\n",ft_strcspn("abricado", "r"));

    //printf("%ld\n",strcspn("Coucou", NULL));
    //printf("%ld\n",ft_strcspn("Coucou", NULL));
}
*/