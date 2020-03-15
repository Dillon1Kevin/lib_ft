int     ft_atoi(char *str)
{
    int res;
    int sign;
    int i;

    i = 0;
    res = 0;
    sign = 1;
    if (str[i] == '-' || str[i] == '+')
        if (str[i] == '-')
            sign = -1;
    if (str[i] == ' ' || str[i] == '\t')
            i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = (res * 10) + (str[i] - '0');
        i++;
    }
    return ((int)res * sign);
}
