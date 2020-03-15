#include "libft.h"

void    ft_putendl(char const *s)
{
    int i;

    i = ft_strlen(s);
    ft_putendl_fd(s, i);
}
