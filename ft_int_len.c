#include "libft.h"

int     ft_int_len(int n)
{
    int len;
    int i;

    len = 0;
    i = n;
    if (i < 0)
        i *= -1;
    while (i > 0) 
    {
        len++;
        i /= 10;
    }
    return (len);
}
