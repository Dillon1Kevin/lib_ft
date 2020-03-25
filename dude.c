#include "libft.h"

int     main(int ac, char **av)
{
    ft_putstr(av[1]);
    int i = 0;
    ft_putstr("\n[");
    while(i < ac)
    {
        ft_strsplit(av[i], '*');
        ft_putstr("]\n::\n[");
        i++;
    }
    ft_putstr("end]\n");
    ft_putchar('\n');
}
