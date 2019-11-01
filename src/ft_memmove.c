/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lboertie <lboertie@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 17:38:21 by lboertie       #+#    #+#                */
/*   Updated: 2019/11/01 13:50:39 by lboertie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	const unsigned char	*source;
	unsigned char		*dest;

	i = 0;
	dest = dst;
	source = src;
	if ((dest == NULL && source == NULL) || dest == source)
		return (dest);
	if (dest < source)
		while (i < len)
		{
			dest[i] = source[i];
			i++;
		}
	else
		while (len > 0)
		{
			dest[len - 1] = source[len - 1];
			len--;
		}
	return (dest);
}
