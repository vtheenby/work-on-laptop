#include "../libft.h"

static int	ft_get_digit_count(int n)
{
	int	i;
	i = 0;
	while (n % 10)
	{
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	int		neg;
	int		len;
	int		digits;
	char	*ret;

	i = 0;
	neg = 0;
	if (n < 0)
		neg = 1;
	digits = ft_get_digit_count(n);
	len = digits + neg;
	ret = malloc(sizeof(char) * len + 1);
	if (neg == 1)
	{
		ret[i] == '-';
		i++;
	}
	while (i < len)
	{
		
	}

}