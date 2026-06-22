#include <stdlib.h>

int is_space(char c)
{
    return ((c >= 9 && c <= 13) || c == ' ');
}

int count_words(char *str)
{
    int i = 0;
    int word_count = 0;
    while(str[i])
    {
        while (str[i] && is_space(str[i]))
            i++;
        if(!str[i])
            break;
        while (str[i] && !(is_space(str[i])))
            i++;
        word_count++;
    }
    return word_count;
}

char *ft_strndup(char *str, int size)
{
    int i = 0;
    char *res = malloc((size + 1) * sizeof(*res));
    if(!res)
        return NULL;
    while(i < size && str[i])
    {
        res[i] = str[i];
        i++;
    }
    res[i] = '\0';
    return (res);
}

int ft_word_len(char *str)
{
    int i = 0;
    while(str[i])
    {
        if(is_space(str[i]))
            return i;
        i++;
    }
    return (i);
}

char    **ft_split(char *str)
{
    if(!str)
        return (NULL);
    int words_count = count_words(str);
    char **res = malloc ((words_count + 1) * sizeof(*res));
    if(!res)
        return NULL;
    int i = 0;
    int j = 0;
    int curr_word_length;
    while(str[i])
    {
        while (str[i] && is_space(str[i]))
            i++;
        if(!str[i])
            break;
        curr_word_length = ft_word_len(str + i);
        res[j] = ft_strndup(str + i, curr_word_length);
        if(!(res[j]))
            return NULL;
        j++;
        i += curr_word_length;
    }
    res[j] = NULL;
    return res; 
}

#include <stdio.h>
void print_tab(char **tab)
{
    int i = 0;
    printf("\n-------\n");
    while(tab[i] != NULL)
    {
        printf("%s\n",tab[i]);
        i++;
    }
    printf("-------\n");
}

int main(void)
{
    char **res;
    res =ft_split("Hello World!");
    print_tab(res);
    res = ft_split("    Hello World!");
    print_tab(res);
    res =ft_split("Hello World!      ");
    print_tab(res);
    res =ft_split("      Hello World!      ");
    print_tab(res);
    res = ft_split("HelloWorld !q      ");
    print_tab(res);
    res = ft_split(" 1 2 3 4    555555");
    print_tab(res);
    return (0);
}