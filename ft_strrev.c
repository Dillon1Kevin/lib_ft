#include "libft.h"
#include <stdlib.h>
char	*ft_strrev(char *str)
{
	int i;
	int j;
	char nstr;

	i = 0;
	j = ft_strlen(str);

	while(j - 1 > i)
	{
		nstr = str[i];
		str[i] = str[j - 1];
		str[j - 1] = nstr;
		j--;
		i++;
	}
	return (str);
}
