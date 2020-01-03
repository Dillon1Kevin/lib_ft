#include "libft.h"

void    ft_strclr(char *s)
{
    size_t i;

    i = ft_strlen(s);
    ft_bzero(s, i);
}
