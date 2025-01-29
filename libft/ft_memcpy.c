/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarci2 <rogarci2@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-29 12:32:43 by rogarci2          #+#    #+#             */
/*   Updated: 2025-01-29 12:32:43 by rogarci2         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*aux;

	i = 0;
	aux = (unsigned char *)dest;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		((unsigned char *)aux)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
/*int main()
{
	unsigned char src[5] = {1, 2, 3, 4, 5};
	unsigned char dest[5];

	ft_memcpy(dest, src, 3);
	memcpy(dest, src, 3);
	printf("devolvemos: %d %d %d\n", dest[0], dest[1], dest[2]);

	return (0);
}*/
/*
-------------Tabla de Numeros----------
char -> caracteres
unsigned char -> siempre positivo
const char -> no puedes cambiar el valor

int -> numeros de -2147483648 a 2147483647
long -> numeros de —9223372036854775808 a 9223372036854775808
unsigned int -> numeros de 0 a 2147483647
unsigned long -> numeros de 0 a 9223372036854775808

casteo
unsigned int *      420.000.000 bin -> 00011001 00001000 10110001 00000000
unsigned char *     25 8 177 0

size_t -> desde el 0 hasta 18,446,744,073,709,551,615 (solo positivos).
*/