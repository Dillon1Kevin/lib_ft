#include "libft.h"

int     ft_delum(char c)
{
    if (c == ' ' || c == '\n' || c == '\t')
        return (1);
    return (0);
}

char    *ft_end(char *str)
{
    int i;

    i = ft_strlen(str);
    while (str[--i] && ft_delum(str[i]))
        str[i] = 0;
    return (str);
}

char    *ft_strtrim(char *s)
{
    int     i;
    int     j;
    char    *str;

    str = ft_memalloc(ft_strlen(s));
    j = 0;
    i = 0;
    while (ft_delum(s[i]))
            i++;
    while (s[i])
        str[j++] = s[i++];
    return (ft_end(str));
}
