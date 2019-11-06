/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lboertie <lboertie@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/03 21:24:45 by lboertie       #+#    #+#                */
/*   Updated: 2019/11/06 15:25:17 by lboertie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	return (wc);
}

static void	ft_free_str_array(char **words, int count)
{
	while (count >= 0)
	{
		if (words[count])
			free(words[count]);
		count--;
	}
	if (words)
		free(words);
}

static char	**ft_fill_strings(char const *s, char c, char **words)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			words[j] = ft_substr(s, k, i - k);
			if (!words[j])
			{
				ft_free_str_array(words, j - 1);
				return (NULL);
			}
			j++;
			k = i + 1;
		}
		i++;
	}
	words[j] = ft_substr(s, k, i - k);
	words[j + 1] = NULL;
	return (words);
}

static char	*ft_clean_input(char const *s, char c)
{
	char	*ret;
	int		i;
	int		k;

	i = 0;
	k = 0;
	ret = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!ret)
		return (NULL);
	while (s[i])
	{
		if (s[i] == c && s[i + 1] == c)
			i++;
		else
		{
			ret[k] = s[i];
			k++;
			i++;
		}
	}
	ret[k] = '\0';
	return (ret);
}

char		**ft_split(char const *s, char c)
{
	char	**words;
	char	*str;
	char	*str1;

	if (!s || s == NULL)
		return (NULL);
	str1 = ft_strtrim(s, &c);
	if (str1 == NULL)
		return (NULL);
	str = ft_clean_input(str1, c);
	if (str == NULL)
		return (NULL);
	free(str1);
	if (!str)
		return (NULL);
	words = malloc(sizeof(char*) * ft_get_wordcount(str, c) + 1);
	if (!words)
		return (NULL);
	words = ft_fill_strings(str, c, words);
	free(str);
	if (!words)
		return (NULL);
	return (words);
}
