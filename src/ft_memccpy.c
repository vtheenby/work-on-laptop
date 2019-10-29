/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lboertie <lboertie@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 16:19:16 by lboertie       #+#    #+#                */
/*   Updated: 2019/10/29 17:35:53 by lboertie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*str1;
	const unsigned char	*str2;
	size_t				i;

	str1 = dst;
	str2 = src;
	i = 0;
	while (i < n)
	{
		str1[i] = str2[i];
		if (str2[i] == (unsigned char)c)
		{
			dst = str1;
			return (dst + i + 1);
		}
		i++;
	}
	return (NULL);
}
