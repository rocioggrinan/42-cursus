/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarci2 <rogarci2@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-29 12:32:29 by rogarci2          #+#    #+#             */
/*   Updated: 2025-01-29 12:32:29 by rogarci2         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

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
/*int		main(void){
	const char *string = "patata";
	char	c = 't';
	size_t 	n = 6;

	void *resultado = ft_memchr(string, c, n);
	void *resultado2 = memchr(string, c, n);
	printf("resturn: %s\n", (char*)resultado);
	printf("resturn2: %s\n", (char*)resultado2);
	return (0);
}*/