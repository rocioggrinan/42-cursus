#include <stdio.h>

int	ft_strlen(const char *a)
{
	int	count;

	count = 0;
	while (a[count] != '\0')
	{
		count++;
	}
	return (count);
}

/*int main (void)
{
	char *a;

	a = "holaaaa";
	printf("return: %d\n", (ft_strlen(a)));
}*/