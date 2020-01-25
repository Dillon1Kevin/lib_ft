int     ft_atoi(char *str)
{
    int res;
    int sign = 1;
    int i;

    i = 0;
    if (str[i] == '-' || str[i] == '+')
        if (str[i] == '-')
            sign = -1;
    while (str[i] <= '0' && str[i] >= '9')
        i++;
    while (str[i] >= '0' && str[i] <= '9')
        res = (res * 10) + (str[i] - '0');
    return (res * sign);
}
