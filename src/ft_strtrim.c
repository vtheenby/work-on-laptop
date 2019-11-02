#include "../libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    char    *str;
    unsigned int     i;
    unsigned int     start;
    unsigned int     end;

    i = 0;
    start = 0;
    end = 0;
    str = malloc(sizeof(char) * ft_strlen(s1) + 1);
    if (str == NULL)
        return (NULL);
    while (i < ft_strlen(set))
    {
        if (ft_strchr(s1, set[i]) != NULL)
            start++;
        if (ft_strrchr(s1, set[i]) != NULL)
            end++;
        i++;
    }
    i = 0;
    while (i + start <= ft_strlen(s1) - end)
    {
        str[i] = s1[i + start];
        i++; 
    }
    return (str);
}