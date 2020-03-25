#include "libft.h"

char	*ft_strrev(char *str)
{
    int i;
    int j;
    char *t;

    t = (char *)malloc(sizeof(char));
    i = 0;
    j = ft_strlen(str);
    while ((str[i] && ft_isascii(str[i])) && j > i)
    {
        t[i] = str[j - i - 1];
        i++;
    }
    t[i] = '\0';
    ft_strcpy(str, t);
    free(t);
    return (str);
}
