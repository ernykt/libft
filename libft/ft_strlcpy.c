#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	size_src;

	size_src = ft_strlen(src);
	if (size_src + 1 < size)
		ft_memcpy(dst, src, size_src + 1);
	else if (size != 0)
	{
		ft_memcpy(dst, src, size - 1);
		dst[size - 1] = '\0';
	}
	return (size_src);
}
