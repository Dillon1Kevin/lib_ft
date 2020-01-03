#include <string.h>
#include "libft.h"

char    *ft_strcat(char *dest, const char *src)
{
    int i;
    int j;

    i = ft_strlen(dest);
    j = ft_strlen(src);

    ft_strncat(dest, src, (i+j));

    dest[i+j] = '\0';
    return (dest);
}
