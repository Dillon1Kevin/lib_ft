#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    char *ptr;

    ptr = (char *)s;
    while(*ptr++)
    {
        if(*ptr == c)
            return (ptr);
    }
    return(NULL);
}
