#include "libft.h"

int     ft_strnequ(char const *s1, char const *s2, size_t n)
{
    int i;

    i = ft_strncmp(s1, s2, n);
    if(i > 0 || i < 0)
        return (0);
    else if (i == 0)
        return (1);

    return (0);
}
