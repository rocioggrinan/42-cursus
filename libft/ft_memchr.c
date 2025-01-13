#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
/*int		main(){
	const char *string = "patata";
	char	c = 't';
	size_t 	n = 6; 

	void *resultado = ft_memchr(string, c, n);
	void *resultado2 = memchr(string, c, n);
	printf("resturn: %s\n", (char*)resultado);
	printf("resturn2: %s\n", (char*)resultado2);
	return 0; 
}*/