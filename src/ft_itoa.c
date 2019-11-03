#include "../libft.h"

static int	ft_get_digit_count(int n)
{
	int	i;
	i = 1;
	if (n < 0)
		n = -n;
	while (n > 1)
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
	while (power > 1)
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

char	*ft_itoa(int n)
{
	int		i;
	int		neg;
	int		len;
	int		digits;
	char	*ret;

	i = 0;
	neg = ft_is_negative(n);
	digits = ft_get_digit_count(n);
	len = digits + neg;
	ret = malloc(sizeof(char) * len + 1);
	if (neg == 1)
	{
		ret[i] = '-';
		n = -n;
		i++;
	}
	while (i < len)
	{
		ret[i] = n / ft_ten_to(digits - 1) + '0';
		n = n % ft_ten_to(digits - 1);
		i++;
		digits--;
	}
	ret[i] = '\0';
	return (ret);
}