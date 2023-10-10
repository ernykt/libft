#include "libft.h"

static int ft_digitcount(int n)
{
    int dc = 0;
    if (n < 0)
        n *= -1;
    while (n != 0)
    {
        n = n / 10;
        dc++;
    }
    return dc;
}

static void convert_positive(int n, char *res, int dc)
{
    int i = dc - 1;
    while (i > 0)
    {
        i--;
        res[i] = n % 10 + '0';
        n = n / 10;
    }
}

static void convert_negative(int n, char *res, int dc)
{
    n = -n;
    res[0] = '-';
    int i = dc - 1;
    while (i > 1)
    {
        i--;
        res[i] = n % 10 + '0';
        n = n / 10;
    }
}

char *ft_itoa(int n)
{
    char *res;
    int dc;

    if (n == 0)
        return "0";
    if (n == -2147483648)
    {
        res = ft_strdup("-2147483648");
        return (res);
    }
    dc = ft_digitcount(n) + 2;
    if (n > 0)
        dc--;
    res = (char *)malloc(dc * sizeof(char));
    if (res == NULL)
        return (NULL);
    ft_bzero(res, dc);
    if (n > 0)
        convert_positive(n, res, dc);
    else
        convert_negative(n, res, dc);
    return (res);
}
