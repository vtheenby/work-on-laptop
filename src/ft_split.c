#include "../libft.h"

static int	ft_get_wordcount(char const *s, char c)
{
	int	wc;
	int	i;

	wc = 1;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			wc++;
		}
		i++;
	}
	return 	(wc);
}

char		**ft_fill_strings(char const *s, char c, char **words)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while(s[i])
	{
		if (s[i] == c)
		{
			words[j] = ft_substr(s, k, i - k);
			j++;
			k = i + 1;
		}
		i++;
	}
	words[j] = ft_substr(s, k, i - k);
	words[j + 1] = NULL;
	return (words);
}

char		**ft_split(char const *s, char c)
{
	char	**words;

	if (s == NULL)
		return (NULL);
	words = malloc(sizeof(char*) *	ft_get_wordcount(s, c) + 1);
	if (words == NULL)
		return NULL;
	ft_fill_strings(s, c, words);
	return (words);
}
