#include "libft.h"

static int ft_len(int n);

char *ft_itoa(int n)
{
    int d;
    char *c;

    d = ft_len(n);
    c = ft_calloc((d + 1), sizeof(char));
    if (c == 0)
        return NULL;
    c[d] = '\0';
    if (n == -2147483648)
    {
        ft_strlcpy(c, "-2147483648", d + 1);
        return c;
    }
    if (n < 0)
    {
        c[0] = '-';
        n = - n;
    }
    while ((d > 0 && c[d - 1] != '-'))
    {
        c[d - 1] = ((n % 10) + '0');
        n = n / 10;
        d--;
    }
    return (c);
}

static int ft_len(int n)
{
    int len;

    len = 0;

    if (n == -2147483648)
        return 11;

    if (n < 0)
    {
        len++;
        n = -n;
    }
    while (n > 0)
    {
        len++;
        n /= 10;
    }
    if (len == 0)
        len = 1;

    return (len);
}

/*int main()
{
    int n = -42;
    char *c = ft_itoa(n);

    if (c == NULL)
    {
        printf("Error al convertir el numero %d a cadena.\n",(n));
        return 1;
    }

    printf("%s\n", c);
    free(c);

    return (0);
}*/