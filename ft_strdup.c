#include "libft.h"

char    *ft_strdup(const char *s)
{
    char *s1;
    int i;

    i = ft_strlen(s);
    s1 = (char *) malloc(sizeof(*s));
    ft_memcpy(s1, s, i);
    return (s1);
    free(s1);
}
