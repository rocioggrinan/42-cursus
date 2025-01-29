/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarci2 <rogarci2@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-29 12:31:21 by rogarci2          #+#    #+#             */
/*   Updated: 2025-01-29 12:31:21 by rogarci2         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	ft_memset(str, 0, n);
}

/*int main()
{
	unsigned char buffer[5] = {1, 2, 3, 4, 5};
	printf("return: %d %d %d %d %d\n", buffer[0], buffer[1], buffer[2],
		buffer[3], buffer[4]);

	return (0);
}*/