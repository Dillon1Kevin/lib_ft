#include "libft.h"

int ft_strequ(char const *s1, char const *s2)
{
    int i;

    i = ft_strcmp(s1, s2);
    if(i > 0 || i < 0)
        return (0);
    else if(i == 0)
        return (1);

    return (0);
}
