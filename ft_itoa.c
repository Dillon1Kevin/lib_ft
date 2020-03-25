#include "libft.h"

char    *ft_itoa(int n)
{
    char *str;
    int i;
    int j;
    int neg;

    j = 0;
    neg = 0;
    if (n < 0)
        neg = 1;
    if (neg == 1)
        n *= -1;
    i = ft_int_len(n);
    str = (char*)malloc(sizeof(char) * i + 1 + neg);
    while (n > 0)
    {
        str[j++] = (n % 10) + 48;
        n /= 10;
    }
    if (neg == 1)
        str[j++] = '-';
    str[j] = '\0';
    return (ft_strrev(str));
}
