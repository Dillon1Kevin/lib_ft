#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int     main(int ac, char **av)
{
    (void) ac;
    int a = ft_atoi(av[1]);
    char *s1;
    
    ft_putstr("atoi: ");
    ft_putnbr(a);
    ft_putstr("\nitoa: ");
    s1 = ft_itoa(a);
    ft_putstr(s1);
    ft_putstr("\n\n");
    return (0);
}
