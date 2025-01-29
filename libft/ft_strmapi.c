/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarci2 <rogarci2@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-29 12:34:54 by rogarci2          #+#    #+#             */
/*   Updated: 2025-01-29 12:34:54 by rogarci2         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*a;

	i = 0;
	len = ft_strlen(s);
	a = malloc(sizeof(char) * len + 1);
	if (s == 0 || a == 0 || f == 0)
		return (NULL);
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
	return (c);
}
int	main(void)
{
	printf("return: %s\n", ft_strmapi("hola", &printchari));
	return (0);
}*/