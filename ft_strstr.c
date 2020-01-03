#include "libft.h"

char    *ft_strstr(const char *hay, const char *needle)
{
    ssize_t j;

    j = 0;
    
    if(*hay == '\0')
        return ((char *) hay);

    while(*hay)
    {
        while(*hay == *needle && *hay)
        {
            hay++;
            needle++;
            j++;
        }
        if(*needle == '\0')
            return ((char *) hay - j);
                
        needle -= j;
        hay -= j - 1;
        j = 0;

    }
    return(NULL);
}
