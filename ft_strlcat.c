/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lboertie <lboertie@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 15:35:54 by lboertie       #+#    #+#                */
/*   Updated: 2019/11/05 17:32:59 by lboertie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dstlen;
	size_t	srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	j = dstlen;
	i = 0;
	if (dstsize <= dstlen)
	{
		return (dstsize + srclen);
	}
	while (src[i] && i + j < dstsize - 1)
	{
		dst[j + i] = src[i];
		i++;
	}
	if (dstsize > 0)
	{
		dst[j + i] = '\0';
	}
	return (dstlen + srclen);
}
