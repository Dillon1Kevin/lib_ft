#include "libft.h"

char    **ft_strsplit(const char *str, char c)
{
    int i;
    int j;
    int k;
    char **arr;

    i = 0;
    k = 0;
    if (!(arr = (char **)malloc(ft_strlen(str) * sizeof(char *))))
        return (NULL);
    while(str[i] && ft_isprint(str[i]))
    {
        j = 0;
        while (str[i] && str[i] == c)
            i++;
        if (!(arr[k] = (char *)malloc(sizeof(char))))
            return (NULL);
        while (str[i] && str[i] != c)
            arr[k][j++] = str[i++];
        while (str[i] && str[i] == c)
            i++;
        arr[k++][j] = '\0';
    }
    arr[k] = NULL;
    return arr;
}
