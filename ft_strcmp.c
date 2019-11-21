#include "libft.h"
#include <stdlib.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t i;
	
	i = -1;

	while(s1[++i] &&  s2[i])
	{
		if(s1[i] != s2[i])
			return (s2[i] - s1[i]);
	}
	return (0);
}
