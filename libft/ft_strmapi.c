#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int    i;
	int             len;
	char            *a;

	i = 0;
	len = ft_strlen(s);
    a = malloc(sizeof(char)* len + 1);
	if (s == 0 || a == 0 || f == 0)
		return NULL;
	while (i < len)
	{
		a[i] = f(i, s[i]);
		i++;
	}
    a[len] = '\0';
    return (a);
}
/*char printchari(unsigned int i, char c)
{
    printf("return, %u, patata: %c\n", i, c);
    return c;
}
int main()
{
    printf("return: %s\n", ft_strmapi("hola", &printchari));
    return 0;
}*/