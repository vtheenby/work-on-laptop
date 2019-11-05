/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lboertie <lboertie@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/02 15:14:58 by lboertie       #+#    #+#                */
/*   Updated: 2019/11/05 17:32:59 by lboertie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_char(char const c, char const *set)
{
	int	i;
	int	ret;

	i = 0;
	ret = 0;
	while (set[i])
	{
		if (c == set[i])
			ret = 1;
		i++;
	}
	return (ret);
}

static int	ft_get_start(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (ft_check_char(s1[i], set) != 0)
		i++;
	return (i);
}

static int	ft_get_end(char const *s1, char const *set, int len)
{
	while (ft_check_char(s1[len - 1], set) != 0)
		len--;
	return (len);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	int		i;
	int		j;
	int		len;

	if (s1 == NULL || set == NULL)
		return (NULL);
	len = ft_strlen(s1);
	i = ft_get_start(s1, set);
	j = 0;
	if (i != len)
		len = ft_get_end(s1, set, len);
	ret = malloc(sizeof(char) * len - i + 1);
	if (ret == NULL)
		return (NULL);
	while (i < len)
	{
		ret[j] = s1[i];
		i++;
		j++;
	}
	ret[j] = '\0';
	return (ret);
}
