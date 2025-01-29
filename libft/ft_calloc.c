/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarci2 <rogarci2@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-29 12:31:33 by rogarci2          #+#    #+#             */
/*   Updated: 2025-01-29 12:31:33 by rogarci2         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;

	result = malloc(nmemb * size);
	if (!result)
		return (0);
	ft_bzero(result, nmemb * size);
	return (result);
}
/*int main()
{
	int *array = (int *)ft_calloc(5, sizeof(int));

	if (!array) {
		printf("Error al asignar memoria\n");
		return (1);
	}
	printf("memoria asiganada e inicializada con exito\n");

	free(array);
	return (0);
}*/
