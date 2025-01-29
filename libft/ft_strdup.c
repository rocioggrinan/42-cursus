/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarci2 <rogarci2@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-29 12:33:59 by rogarci2          #+#    #+#             */
/*   Updated: 2025-01-29 12:33:59 by rogarci2         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		len;
	char	*tab;
	int		i;

	i = 0;
	len = ft_strlen((char *)src);
	tab = (char *)malloc(sizeof(char) * len + 1);
	if (tab == 0)
		return (0);
	while (i < len)
	{
		tab[i] = src[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

/*int main()
{
	const char *orig = "Hello friend";
	char *duplicada = strdup(orig);

	if (duplicada != 0)
	{
		printf("Return: %s\n", orig);
		printf("Return2: %s\n", duplicada);
		free(duplicada);
	}
	else
	{
		printf("error al duplicado. \n");
	}
	return (0);
}*/