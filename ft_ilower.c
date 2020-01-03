#include "libft.h"

int     ft_islower(int c)
{
    if(c >= 97 && c <= 122)
        return (0);
    else
        return (1);
    return (-1);
}
