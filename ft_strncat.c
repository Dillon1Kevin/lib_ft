#include "libft.h"

char *ft_strncat(char *dest, const char *src, size_t n)
{
    int i;
    int j;

    i = ft_strlen(dest);

    j = 0;
    while(src[j] != '\0' && j < (int)n)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
        return (dest);
}
