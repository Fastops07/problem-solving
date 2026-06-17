#include <stddef.h>

int contains (char c, const char *accept)
{
    int i = 0;
    while (accept[i])
    {
        if(accept[i] == c)
            return 1;
        i++;
    }
    return 0;
}

size_t	ft_strspn(const char *s, const char *accept)
{
    int i = 0;
    while(s[i])
    {
        if(!(contains(s[i], accept)))
            return i;
        i++;
    }
    return i;
}
#include <stdio.h>
#include <string.h>
int main()
{
    printf("MINE :%ld\n",strspn("A", "A"));
    printf("YOUR :%ld\n",ft_strspn("A", "A"));
}