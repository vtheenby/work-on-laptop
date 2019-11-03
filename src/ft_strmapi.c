#include "../libft.h"



char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*ret;

	i = 0;
	ret = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (ret == NULL)
		return (NULL);
	while (s[i])
	{
		ret[i] = f(i, s[i]);
		i++;
	}
	return ret;
}