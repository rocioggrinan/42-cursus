/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarci2 <rogarci2@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-29 12:34:24 by rogarci2          #+#    #+#             */
/*   Updated: 2025-01-29 12:34:24 by rogarci2         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	destt;
	size_t	srcc;
	size_t	c;

	destt = 0;
	while (destt < n && dest[destt] != '\0')
		destt++;
	srcc = 0;
	while (src[srcc] != '\0')
		srcc++;
	if (destt == n)
		return (n + srcc);
	c = 0;
	while (src[c] != '\0' && (destt + c) < (n - 1))
	{
		dest[destt + c] = src[c];
		c++;
	}
	dest[destt + c] = '\0';
	return (destt + srcc);
}

/*int main() {
	const char src[7] = "azul";
	char dest[13] = "rojo ";
	ft_strlcat(dest, src, 6);
	printf("%s", dest);

	return (0);
}*/