#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *word;
	unsigned char co;
	size_t i;

	co = (unsigned char)c; 
	i = -1;
	word = (unsigned char *)s;
	while(++i <= n)
	{
		if(word[i] == co)
			return ((void *)&word[i]);
	}
	return ((void *)&word[i]);
}
