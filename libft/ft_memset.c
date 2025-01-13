#include <stdio.h>

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			a;

	ptr = (unsigned char *)str;
	a = 0;
	while (a < n)
	{
		ptr[a] = (unsigned char)c;
		a++;
	}
	return (str);
}
/*int main()
{
	unsigned char buffer[5] = {0, 0, 0, 0, 0};
		ft_memset(buffer, 42, 3);
		printf("return: %d %d %d %d %d\n", buffer[0], buffer[1], buffer[2],
			buffer[3], buffer[4]);

	return (0);
}*/
