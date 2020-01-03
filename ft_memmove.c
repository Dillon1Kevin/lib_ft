#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;
	i = -1;
	unsigned char *TO;
	unsigned char *FROM;

	TO = (unsigned char *)dest;
	FROM = (unsigned char *)src;
	while(TO[++i] && FROM[i])
	{
		ft_memcpy(TO, FROM, n);
		if(TO[i] == n)
			TO[i] = FROM[i];
	}
	return (dest);
}
