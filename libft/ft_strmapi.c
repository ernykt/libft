#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			size_s;
	char			*new_s;
	if (!s)
		return (NULL);
	i = 0;
	size_s = ft_strlen(s);
	new_s = (char *)malloc((size_s + 1) * sizeof(char));
	if (new_s == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		new_s[i] = f(i, s[i]);
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}