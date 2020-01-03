#include "libft.h"

int     ft_strlcat(char *s1, const char *s2, size_t l)
{
    size_t i;
    size_t j;

    j = ft_strlen(s1);
    i = ft_strlen(s2);

    ft_strncat(s1, s2, l);

    s1[i+j] = '\0';
    return (i);
}
