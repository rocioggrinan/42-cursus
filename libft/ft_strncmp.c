#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	i = 0;

	if (n == 0)
		return 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}


/*int main() 
{
    const char    s1[] = "12z4";
    const char    s2[] = "92h4";
    size_t  n;

    n = 5;
    printf("Result: %d\n", ft_strncmp(s1, s2, n));
    printf("Result2: %d\n", strncmp(s1, s2, n));
    return (0);
}*/