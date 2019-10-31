/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lboertie <lboertie@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 15:35:54 by lboertie       #+#    #+#                */
/*   Updated: 2019/10/31 19:57:42 by lboertie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t len;

	i = 0;
	len = ft_strlen(dst);
	while (src[i] && i < dstsize - len - 1)
	{
		dst[len + i] = src[i];
		i++;
	}
	if (dstsize != 0 && len < dstsize)
	{
		dst[len + i + 1] = '\0';
	}
	return (len + ft_strlen(src));
}
