/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarci2 <rogarci2@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-29 12:33:33 by rogarci2          #+#    #+#             */
/*   Updated: 2025-01-29 12:33:33 by rogarci2         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	a;

	a = 0;
	while (s[a] != '\0')
		write(fd, &s[a++], 1);
}
/*int main (void)
{
	int fd;
	char *s = "hola partdpa";
	int a;

	fd = open("prueba.txt", O_RDWR, O_APPEND);
	ft_putstr_fd(s, fd);
	return(0);
}*/