#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	size_t				byte;
	unsigned char		*alloc_mem;

	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	byte = nmemb * size;
	alloc_mem = (unsigned char*)malloc(byte);
	if (alloc_mem == NULL)
		return (NULL);
	ft_bzero(alloc_mem, byte);
	return ((void *)alloc_mem);
}
