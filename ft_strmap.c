#include "libft.h"

char    *ft_strmap(const char *s, char (*f)(char))
{
    int i;
    char *str;

    if (!s)
        return (NULL);
    if (!(str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)))
        return (NULL);
    while (s[i])
        str[i] = f(s[i++]);
    str[i] = '\0';
    return (str);
}
