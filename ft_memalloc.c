#include "libft.h"

void    *ft_memalloc(size_t size)
{
    void *s1;

    if(!(s1 = (char *)malloc(sizeof(size))))
        return (NULL);
    return(ft_memset(s1, 0, size));
}
