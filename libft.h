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

void	*ft_memcpy(void *s1, const void *s2, size_t n);
void	*ft_bzero(void *s, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);

int	ft_atoi(const char *str);
char	*ft_strrev(char *str);
void	ft_swap(int *a, int *b);
int	ft_strlen(const char *str);
void	ft_putchar(char *c);
void    ft_putchar_fd(char c, int fd);
void	ft_putstr(const char *str);
int	ft_strcmp(const char *s1, const char *s2);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char    *ft_strcat(char *dest, const char *src);
char    *ft_strncat(char *dest, const char *src, size_t n);
char    *ft_strstr(const char *hay, const char *needle);
char    *ft_strrchr(const char *s, int c);
char    *ft_strchr(const char *s, int c);
char    *ft_strnstr(const char *s1, const char *s2, size_t l);
int     ft_strlcat(char *s1, const char *s2, size_t l);
char    *ft_strdup(const char *s);

int     ft_isalpha(int c);
int     ft_tolower(int c);
int     ft_toupper(int c);
int     ft_isdigit(int c);
int     ft_isalnum(int c);
int     ft_isacsii(int c);
int     ft_isascii(int c);
int     ft_isprint(int c);

void    *ft_memalloc(size_t size);
void    ft_memdel(void **ap);
char    *ft_strnew(size_t size);
void    ft_strdel(char **as);
void    ft_strclr(char *s);
void    ft_putnbr(int n);
void    ft_putnbr_fd(int n, int fd);
int     ft_strequ(char const *s1, char const *s2);
int     ft_strnequ(char const *s1, char const *s2, size_t n);
void    ft_putendl(char const *s);
void    ft_putendl_fd(char const *s, int fd);
#endif
