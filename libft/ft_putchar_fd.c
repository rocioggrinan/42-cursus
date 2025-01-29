/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarci2 <rogarci2@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-29 12:33:04 by rogarci2          #+#    #+#             */
/*   Updated: 2025-01-29 12:33:04 by rogarci2         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd != 0)
		write(fd, &c, 1);
}

/*int main (void)
{
	int fd;

	fd = open("prueba.txt", O_RDWR, O_APPEND);
	ft_putchar_fd('c', fd);
	return(0);
}*/