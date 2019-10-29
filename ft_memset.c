#include <string.h>
#include <stdio.h>

void *ft_memset(void *str, int c, size_t n)
{
	int i;
	char *ptr;

	i = 0;
	ptr = (char*)str;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}

int main(void)
{
	char str[50];

	strcpy(str, "this is a very cool string");
	printf("%s", str);

	ft_memset(str, 'a', 5);
	printf("%s", str);
	return (0);
}
