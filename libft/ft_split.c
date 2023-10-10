#include "libft.h"

static	size_t	ft_countwords(char const*s, char c)
{
	size_t		i;
	size_t		word_count;

	i = 0;
	word_count = 0;
	while (s[i])
	{
		if (!(i == 0 || i == ft_strlen(s) - 1))
		{
			if (s[i] != c && s[i - 1] == c)
				word_count++;
		}
		i++;
	}
	if (s[0] == c)
		word_count--;
	return (word_count + 1);
}

static char	*ft_dupword(char const *s, size_t start, size_t finish)
{
	char	*word;
	size_t 		i;

	i = 0;
	word = (char *)malloc((finish - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < finish)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char		**res;
	size_t		i;
	size_t		j;
	size_t		k;

	res = (char **)malloc((ft_countwords(s, c) + 1) * sizeof(char *));
	if (!s || !res)
		return (NULL);
	i = 0;
	k = 0; // Initialize k to keep track of the result array index
	while (k < ft_countwords(s, c))
	{
		while (s[i] == c)
			i++;
		j = i; // Initialize j to start the word
		while (s[j] != c && s[j])
			j++;
		res[k] = ft_dupword(s, i, j);
		if (!res[k])
			return (NULL);
		i = j; // Move i to the next delimiter or end of string
		k++;   // Move to the next result array element
	}
	res[k] = NULL; // Null-terminate the result array
	return (res);
}
