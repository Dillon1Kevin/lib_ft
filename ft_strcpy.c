#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	int i;
	dest = (char *)malloc(sizeof(char) * ft_strlen(src));
	i = -1;

	while(src[++i])
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
