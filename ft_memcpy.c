#include <stdio.h>
#include <stdlib.h>

void *ft_memcpy(void *str1, const void *str2, size_t n)
{
	int i;
	unsigned char *dst;
	unsigned const char *src;

	dst = (char *)str1;
	src = (char *)str2;
	i = 0;
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}

int main(void)
{
	char str[34];
	char str1[] = "123456";

	printf("%s", (char *)ft_memcpy(str, str1, 5));
	return (0);
}
