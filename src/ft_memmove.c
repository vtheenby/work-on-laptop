/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lboertie <lboertie@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 17:38:21 by lboertie       #+#    #+#                */
/*   Updated: 2019/10/29 17:53:08 by lboertie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*str1;
	const unsigned char	*str2;

	i = 0;
	str1 = dst;
	str2 = src;
	while (i < len)
	{
		str1[i] = str2[i];
		i++;
	}
	dst = str1;
	return (dst);
}
