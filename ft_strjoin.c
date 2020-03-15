#include "libft.h"

char    *ft_strjoin(const char *s1, const char *s2)
{
    char *str;
    int i;
    int j;

    i = ft_strlen(s1);
    j = ft_strlen(s2);
    if (!(str = (char *)malloc(i + j)))
        return (NULL);
    else
    {
        ft_strcat(str, s1);
        ft_strcat(str, s2);
    }   
    return (str);
}
