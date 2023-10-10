#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*memmory_area;
	unsigned char	uc_c;
	size_t			i;

	memmory_area = (unsigned char*)s;
	i = 0;
	uc_c = (unsigned char)c;
	while (i < n)
	{
		if (memmory_area[i] == uc_c)
			return ((void *)(memmory_area + i));
		i++;
	}
	return (NULL);
}
