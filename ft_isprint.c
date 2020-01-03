#include "libft.h"

int     ft_isprint(int c)
{
    if (c >= 40 && c <= 177)
        return(0);
    else
        return (-1);
}
