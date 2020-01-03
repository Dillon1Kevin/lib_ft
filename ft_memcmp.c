#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	i = -1;

	while(i < n)
	{
		if(s1++ != s2++)
			return (s2 - s1);
		i++;
	}
	return (s2 - s1);
}
