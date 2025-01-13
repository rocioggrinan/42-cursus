#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			i;

	i = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d > s)
		while (len-- > 0)
			d[len] = s[len];
	else
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	return (dst);
}

/*int	main(void)
{
	char src[] = "P7RUEBA";
	char dest[20] = "pro";

	char *result = ft_memmove(dest, src, 2);
	char *result2 = memmove(dest, src, 2);
	printf("return: %s\n", result);
	printf("return2: %s\n", result2);

	return (0);
}*/