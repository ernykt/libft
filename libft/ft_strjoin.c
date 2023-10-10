#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size_s1;
	size_t	size_s2;
	char	*new_str;

	if (!s1 && !s2)
		return (0);
	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	new_str = (char *)malloc((size_s1 + size_s2 + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	ft_memcpy(new_str, s1, size_s1);
	ft_memcpy(new_str + size_s1, s2, size_s2);
	new_str[size_s1 + size_s2] = '\0';
	return (new_str);
}
