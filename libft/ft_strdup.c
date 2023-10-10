#include "libft.h"

char *ft_strdup(const char *s)
{
	int		size;
	char	*dup;
	int		i;	

	size = ft_strlen(s);
	dup = (char *)malloc(size * sizeof(char) + 1);
	i = 0;
	if (dup == NULL)
		return (NULL);
	while (i < size)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}