#include "libft.h"

char    *ft_strsub(char const *s, unsigned int start, size_t len)
{
    char    *str;
    size_t i;
    size_t j;

    j = 0;
    i = (size_t)start; 
    str = ft_memalloc(len);
    while (i <= len)
        str[j++] = s[i++];
    str[i] = '\0';
    return (str);
}
