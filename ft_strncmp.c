/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lboertie <lboertie@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 14:01:48 by lboertie       #+#    #+#                */
/*   Updated: 2019/11/06 19:45:16 by lboertie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!s1 || !s2 || n == 0)
		return (0);
	if (ft_strlen(s1) == 0 || ft_strlen(s2) == 0)
	{
		return ((unsigned char)s1[i] - s2[i]);
	}
	while (i < n && (s1[i] && s2[i]))
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - s2[i]);
		}
		i++;
	}
	return ((unsigned char)s1[i] - s2[i]);
}
