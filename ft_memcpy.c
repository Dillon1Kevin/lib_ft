#include "libft.h"

void	*ft_memcpy(void *s1, const void*s2, size_t n)
{
    s1 = ft_strncpy(s1, s2, n);
	return (s1);
}
