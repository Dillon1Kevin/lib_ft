#include "libft.h"

char    **ft_arr(char **src)
{
   char **arr;
   int i;

   i = 0;
   if (!(arr = (char **)malloc(sizeof(char) * ft_strlen(src[i]))))
       return (NULL);
   while (src[i])
   {
       arr[i] = (char *)malloc(sizeof(char) * ft_strlen(src[i]));
       ft_strcat(arr[i], src[i]);
       i++;
   }
   return (arr);
}

void   ft_putarr(char **arr)
{
    int i;

    i = 0;
    while (arr[i] != NULL)
    {
        ft_putstr("\n[");
        ft_putstr(arr[i]);
        ft_putstr("]\n");
        i++;
    }
}

int     main(int ac, char **av)
{
    (void) ac;
    char **str = ft_strsplit(av[1], av[2][0]);

    ft_putarr(str);
    ft_putstr("\n___________\n");
    /*ft_putarr(ft_arr(av));
    return 0;*/
    free(str);
}
    
