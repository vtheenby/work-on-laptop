/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lboertie <lboertie@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/03 21:23:06 by lboertie       #+#    #+#                */
/*   Updated: 2019/11/05 17:32:59 by lboertie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_digit_count(int n)
{
	int	i;

	i = 0;
	if (n == MIN_INT)
		return (9);
	if (n < 0)
		n = -n;
	else if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static int	ft_ten_to(int power)
{
	int	ret;

	ret = 1;
	while (power > 0)
	{
		ret = ret * 10;
		power--;
	}
	return (ret);
}

static int	ft_is_negative(int n)
{
	if (n < 0)
		return (1);
	else
		return (0);
}

static int	ft_handle_min_int(int n, int *i, char *ret)
{
	if (n < 0)
	{
		ret[*i] = '-';
		if (n == MIN_INT)
		{
			*i += 1;
			ret[*i] = '2';
			n = 147483648;
		}
		else
		{
			n = -n;
		}
		*i += 1;
	}
	return (n);
}

char		*ft_itoa(int n)
{
	int		i;
	int		digits;
	char	*ret;

	i = 0;
	digits = ft_get_digit_count(n);
	ret = malloc(sizeof(char) * digits + ft_is_negative(n) + 1);
	if (ret == NULL)
		return (NULL);
	if (ft_is_negative(n) == 1)
	{
		n = ft_handle_min_int(n, &i, ret);
	}
	while (digits)
	{
		ret[i] = n / ft_ten_to(digits - 1) + '0';
		n = n % ft_ten_to(digits - 1);
		i++;
		digits--;
	}
	ret[i] = '\0';
	return (ret);
}
