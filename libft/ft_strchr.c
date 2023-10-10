#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	const char *fptr;

	fptr = s;
	while (*fptr)
	{
		if (*fptr == c)
			return ((char *)fptr);
		fptr++;
	}
	if (c == '\0')
		return ((char *)fptr);
	return (NULL);
}
