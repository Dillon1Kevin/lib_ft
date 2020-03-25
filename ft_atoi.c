#include "libft.h"

int     ft_atoi(const char *str)
{
    int res;
    int sign;
    int i;

    i = 0;
    res = 0;
    sign = 1;
    while (str[i])
    {
        if (str[i] == ' ' || str[i] == '\t')
            i++;
        if (str[i] == '-' || str[i] == '+')
            if (str[i] == '-')
                sign = -1;
        while (ft_isdigit(str[i]))
        {
            res = (res * 10) + (str[i] - '0');
        }
        i++;
    }
    return ((int)res * sign);
}
