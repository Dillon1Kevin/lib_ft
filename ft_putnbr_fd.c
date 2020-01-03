#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    if(n < 0)
    {
        if(n == -2147483648)
            ft_putstr("-2147483648");
        else
            ft_putchar_fd('-', fd);
        n *= -1;
    }
    if (n > 9)
    {
        ft_putnbr_fd(n / 10, fd);
        ft_putnbr_fd(n % 10, fd);
    }
    else if (ft_isdigit(n + 48))
        ft_putchar_fd(n + 48, fd);
}
