#include "libft.h"

void    ft_putendl_fd(char const *s, int fd)
{
    int i;

    i = 0;
    if(!s)
        return;
    while(i < fd)
        write(1, &s[i++], 1);
    ft_putstr("\n");
}
