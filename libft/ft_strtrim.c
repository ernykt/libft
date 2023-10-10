#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		i;
	int		j;

	if (!s1)
		return (NULL);
	if (!set)
		return ft_strdup(s1);
	i = 0;
	j = ft_strlen(s1) - 1;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (s1[j] && ft_strchr(set, s1[j]))
		j--;
	ptr = ft_substr(s1, i, j - i + 1);
	return (ptr);
}
