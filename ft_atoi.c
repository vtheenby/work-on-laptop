/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lboertie <lboertie@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 15:25:35 by lboertie       #+#    #+#                */
/*   Updated: 2019/11/05 17:33:51 by lboertie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_handle_overflow(int sign)
{
	if (sign < 0)
		return (0);
	else
		return (-1);
}

int			ft_atoi(const char *str)
{
	int					sign;
	int					i;
	unsigned long int	total;
	unsigned long int	last;

	i = 0;
	sign = 1;
	total = 0;
	while ((str[i] <= 13 && str[i] >= 9) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		last = total;
		total = total * 10 + str[i] - '0';
		if (last > total)
			return (ft_handle_overflow(sign));
		i++;
	}
	return ((int)total * sign);
}
