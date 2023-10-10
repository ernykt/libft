#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*pdest;
	unsigned const char	*psrc;
	size_t				i;

	if (!dest && !src)
		return (0);
	pdest = (unsigned char*)dest;
	psrc = (unsigned char*)src;
	i = n;
	if (pdest > psrc)
	{
		while (i > 0)
		{
			i--;
			pdest[i] = psrc[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			pdest[i] = psrc[i];
			i++;
		}
	}
	return (dest);
}
