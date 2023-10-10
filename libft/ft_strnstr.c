#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*nc_big;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	nc_big = (char *)big;
	if (*little == '\0' || len == 0)
		return (nc_big);
	while (big[i] && i < len)
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (little[j] && big[i + j] && big[i + j] == little[j] && i + j < len)
				j++;
		}
		if (j == ft_strlen(little))
			return (nc_big + i);
		i++;
	}
	return (0);
}
