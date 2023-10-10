#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
    size_t            i;
    unsigned char    *ptr;

    i = 0;
    ptr = (unsigned char*)b;
    while (i < len)
    {
        *ptr = c;
        ptr++;
        i++;
    }
    return (b);
}
