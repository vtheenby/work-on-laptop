/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lboertie <lboertie@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 15:35:02 by lboertie       #+#    #+#                */
/*   Updated: 2019/11/05 17:32:59 by lboertie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*str1;
	unsigned const char	*str2;

	str1 = dst;
	str2 = src;
	i = 0;
	if (dst == NULL && src == NULL)
	{
		return (NULL);
	}
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	dst = str1;
	return (dst);
}
