#include <string.h>
#include <stdio.h>

void ft_bzero(void *s, size_t n)
{
	int i;
	char *ptr;

	i = 0;
	ptr = (char*)s;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}

int main(void)
{
	char str[50];

	strcpy(str, "this is a very cool string");
	printf("%s", str);

	ft_bzero(str, 5);
	printf("%s", str+4);
	return (0);
}
