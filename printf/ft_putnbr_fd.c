/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarci2 <rogarci2@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-29 12:33:25 by rogarci2          #+#    #+#             */
/*   Updated: 2025-01-29 12:33:25 by rogarci2         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int n)
{
	if (n < 0)
		n = n * -1;
	return (n);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	array[11];
	int		counter;

	if (n < 0)
	{
		write(fd, "-", 1);
	}
	counter = 0;
	array[counter++] = ft_abs(n % 10) + '0';
	n = n / 10;
	while (n != 0)
	{
		array[counter++] = ft_abs(n % 10) + '0';
		n = n / 10;
	}
	while (counter)
	{
		write(fd, &array[--counter], 1);
	}
}
/*int	main(void)
{
	int fd;
	const char *n = "-2147483648";

	fd = open("prueba.txt", O_RDWR, O_APPEND);
	ft_putnbr_fd(-2147483648, fd);
	write(fd, "\n", 1);
	return (0);
}*/