/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarci2 <rogarci2@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-29 12:35:38 by rogarci2          #+#    #+#             */
/*   Updated: 2025-01-29 12:35:38 by rogarci2         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	a;
	char	*b;
	size_t	i;

	if (s == 0)
		return (0);
	i = 0;
	a = ft_strlen(s);
	if (start >= a)
		return ((char *)ft_strdup(""));
	else if (a - start <= len)
		len = a - start;
	b = (char *)malloc(sizeof(char) * (len + 1));
	if (b == 0)
		return (0);
	while (i < len)
	{
		b[i] = s[i + (size_t)start];
		i++;
	}
	b[i] = '\0';
	return (b);
}

/*int main()
{
	char *s = "casa de pepe";
	char *result;

	result = ft_substr(s, 5, 3);
	printf("Return: %s\n", result);
	free(result);

	result = ft_substr(s, 20, 5);
	printf("Return2: %s\n", result);
	free(result);

	result = ft_substr(s, 8, 10);
	printf("Return3: %s\n", result);
	free(result);

	return (0);
}*/