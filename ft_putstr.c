#include "libft.h"

void	ft_putstr(const char *str)
{
	int i;

	i = 0;
	if (!str)
		return;
	while (str[i])
		write(1, &str[i++], 1);
}
