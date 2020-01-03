#include "libft.h"

char    *ft_strnstr(const char *s1, const char *s2, size_t l)
{
    size_t j;

    j = 0;

    if(*s1 == '\0')
        return ((char *) s1);

    while(j <= l)
    {
        while(*s1 == *s2 && j <= l)
        {
            s1++;
            s2++;
            j++;
        }

        if(*s2 == '\0')
            return ((char *) s1 - j);

        s2 -= j;
        s1 -= j - 1;
        j = 0;
    }
    return (NULL);
}
