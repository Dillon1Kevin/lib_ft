#include "libft.h"


int     is_upp(char c)
{
    if (c >= 'A' && c <= 'Z')
        return (1);
    return 0;
}

int     is_low(char c)
{
    if (c >= 'a' && c <= 'z')
        return (1);
    return 0;
}

int     is_ws(char c)
{
    if (c == ' ' || c == '\t')
        return (1);
    if (!(is_upp(c) || is_low(c)))
        return (1);
    return 0;
}

void    ft_dude(char *str)
{
    int i;
    int k;

    k = ft_strlen(str);
    i = 0;
    if (!str)
        return ;
    /*ft_arr(ft_strmap(str))*/
    while (str[i] != '\0' && i <= k)
    {

        while (is_ws(str[i]))
            i++;
        ft_putstr("[");
        while (!(is_ws(str[i])))
        {
            ft_putchar(str[i]);
            i++;
        }
        if (is_ws(str[i]))
            ft_putstr("]");
        i++;
    }
}
