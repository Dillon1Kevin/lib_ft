#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    char *ptr;

    s = ft_strrev((char *)s);
    ptr = (char *)s;
    while(*ptr)
    {
        if(*ptr == c)
            return (ptr);
        ptr++;
    }
    return(NULL);
}
