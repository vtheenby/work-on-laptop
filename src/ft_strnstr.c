/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lboertie <lboertie@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 18:08:27 by lboertie       #+#    #+#                */
/*   Updated: 2019/11/01 18:29:16 by lboertie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (i < len)
	{
		while (haystack[j + i] == needle[j] && haystack[j + i])
		{
			j++;
			if (j == ft_strlen(needle) && j + i <= len)
				return ((char *)haystack + i);
		}
		i++;
		j = 0;
	}
	return (NULL);
}
