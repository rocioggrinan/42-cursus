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
#include <stdlib.h>
#include <string.h>

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
	char dest[] = "1234";
	const char src[] = "Petp";
	char dest2[] = "1234";
	const char src2[] = "Petp";

	printf("return: %zu\n", (strlcpy(dest2, src2, 5)));
	printf("%s", dest);
	printf("return: %zu\n", (ft_strlcpy(dest, src, 5)));
	printf("%s", dest); 
	return(0);
}*/
/*int		main(){

	char	destino[] = "mundo"; 
	const	char *origen = "hola"; 
	size_t	t = 5; 

	size_t resultado = ft_strlcpy(destino, origen, t);
	printf("el resultado es: %zu\n", resultado);
	printf("la cadena copiada es: %s", destino);
	return 0; 
}*/