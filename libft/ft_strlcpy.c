/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarci2 <rogarci2@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-29 12:34:36 by rogarci2          #+#    #+#             */
/*   Updated: 2025-01-29 12:34:36 by rogarci2         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	count;
	size_t	len;

	count = 0;
	len = ft_strlen(src);
	if (size > 0)
	{
		while (count < len && count < size - 1)
		{
			dest[count] = src[count];
			count++;
		}
		dest[count] = '\0';
	}
	return (len);
}
/*int main(void)
{
	char dest[5];
	char src[50] = "Pepee";

	printf("return: %zu\n", (ft_strlcpy(dest, src, 5)));
	return(0);
}*/
