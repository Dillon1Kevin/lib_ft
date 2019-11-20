#ifndef LIBFT_H
#define LIBFT_H
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


typedef struct	s_list
{
	void	*content;
	size_t	content_size;
	struct	s_list	*next;
		
}t_list;
/* |v| add t_list functions*/
/* |v| add all your own functions here |v| :*/
int	ft_atoi(const char *str);
char	*ft_strrev(char *str);
void	ft_swap(int *a, int *b);
int	ft_strlen(char *str);
void	ft_puchar(char *c);
void	ft_putstr(const char *str);

#endif
