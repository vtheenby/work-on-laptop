#include <stdio.h>

int ft_isalpha(int c)
{
	if ((c <= 90 && c >= 65) || (c <= 122 && c >= 97))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int main(void)
{
	printf("%d", ft_isalpha('a'));
	printf("%d", ft_isalpha('z'));
	printf("%d", ft_isalpha('A'));
	printf("%d", ft_isalpha('Z'));
	printf("%d", ft_isalpha('1'));
	printf("%d", ft_isalpha('5'));
	printf("%d", ft_isalpha('^'));
}
