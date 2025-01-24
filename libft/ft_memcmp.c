#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
    const unsigned char *str1 = (const unsigned char *)s1;
    const unsigned char *str2 = (const unsigned char *)s2;
	
    i = 0;
	if (n == 0)
		return 0;
	while (i < n - 1 && str1[i] == str2[i])
		i++;
	return ((int)(str1[i] - str2[i]));
}


/*int main() 
{
    const char    s1[] = "123";
    const char    s2[] = "123";
    size_t  n;

    n = 3;
    printf("Result: %d\n", ft_memcmp(s1, s2, n));
    printf("Result2: %d\n", memcmp(s1, s2, n));
    return (0);
}*/