#include <stdlib.h>
#include "libft.h"
int	ft_atoi(const char *str)		//change this in libft.h too
{
	int sign;
	int res;
	int i;

	res = 0;
	sign = 1;
	i = 0;

	while((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n') || (str[i] == '\v') || (str[i] == '\r') || (str[i] == '\f'))
		i++;
	if(str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			sign = -1;
	}
	while(str[i] >= '0' && str[i] <= '9')
		res = (res * 10) + (str[i++] - '0');
	return(res * sign);

}
